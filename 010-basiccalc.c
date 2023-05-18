#include <stdio.h>

int main() {
    float a,b;
    int choice;
    printf("Calculator 1.0: \n");
    while(choice!=5) {
        printf("What do you want to do?\n");
        printf("1: Sum \n");
        printf("2: Subtract \n");
        printf("3: Multiplicate \n");
        printf("4: Divide \n");
        printf("5: Exit \n");
        scanf("%d", &choice);
        printf("Insert first number: \n");
        scanf("%f", &a);
        printf("Insert second number: \n");
        scanf("%f", &b);
        switch(choice) {
            case 1:
                printf("%f+%f=%f\n",a,b,a+b);
                break;
             case 2:
                printf("%f+%f=%f\n",a,b,a-b);
                break;
            case 3:
                printf("%f*%f=%f\n",a,b,a*b);
                break;
            case 4:
                printf("%f/%f=%f\n",a,b,a/b);
                break;
            case 5:
                printf("Arrivederci!");
                 break;
            default:
                printf("Valore non gestito!");
                break;
            }
        }
    }
