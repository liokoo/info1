#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char str[40], *there, one, two;
    int *pt, list[MAX], index;
    strcpy(str, "This is a string of chars.");
    one = str[0];
    two = *str;
    printf("First output is %c %c\n", one, two);
    one = str[7];
    two = *(str+10);
    printf("Second output is %c %c\n", one,two);
    there=str+15;
    printf("Third output is %c %c\n", str[3], *there);
    for(index=0; index<MAX; index++)
        list[index]= index + MAX;
    pt = list + 27;
    printf("Fourth output is %d %d\n", list[14], *pt);
    }
