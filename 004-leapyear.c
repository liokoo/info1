#include <stdio.h>

int main (){
    int year;
    printf("Insert year: \n");
    scanf("%d", &year);
    if ((year%400==0) || ((year%4==0) && !(year%100==0)))
        printf("It's a leap year");
    else
        printf("It's not a leap year");
    return 0;
     }
