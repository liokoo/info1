#include <stdio.h>

int main() {
    int a, b, c, min, max;
    printf("Insert first number: \n ");
    scanf("%d", &a);
    min = max = a;
    printf("Insert second number: \n ");
    scanf("%d", &b);
    if (b>a)
        max=b;
    else if (b<a)
        min=b;
    printf("Insert third number: \n ");
    scanf("%d", &c);
    if(c>max)
        max=c;
    else if (c<min)
        min=c;
    printf("The minimun is %d, while the maximun is %d.", min, max);
    return 0;
    }
