#include <stdio.h>

int *higher(int *x, int *y, int *z);

int main() {
  int a, b, c;
  int *high;
  printf("Insert first number:");
  scanf("%d", &a);
  printf("\nInsert second number:");
  scanf("%d", &b);
  printf("\nInsert third number:");
  scanf("%d", &c);
  high=higher(&a, &b, &c);
  printf("The higher number is %d", *high);
}

int *higher(int *x, int *y, int *z) {
  if ( *x >= *y )
    if ( *x >= *z )
      return x;
    else
      return z;
  else
    if ( *y >= *z )
      return y;
    else
      return z;
}
