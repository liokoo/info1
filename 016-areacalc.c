#include <stdio.h>

typdef struct {
    int type;
    float a;
    float b;
    } geometric_figure;

int main(){
    geometric_figure figure;
    float area;
    printf("Figure type?\n");
    printf("0: rectangle, \n1: triangle, \n2: square");
    scanf("%d", &figure.type);
    switch(figure.type) {
      case 0:
          printf("\n Base of the rectangle:");
          scanf("%f", &figure.a);
          printf("\n Height of the rectangle:");
          scanf("%f", &figure.b);
          area=(float)(figure.a*figure.b);
          printf("Rectangle area is: %f", area);
          break;
      case 1:
          printf("\n Base of the triangle:");
          scanf("%f", &figure.a);
          printf("\n Height of the triagle:");
          scanf("%f", &figure.b);
          area=(float)(figure.a*figure.b)/2;
          printf("Triangle area is: %f", area);
          break;
      case 2:
          printf("\n Sside of the square:");
          scanf("%f", &figure.a);
          area=(float)(figure.a*figure.a);
          printf("Square area is: %f", area);
          break;
    }
}
