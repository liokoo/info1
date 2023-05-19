#include <stdio.h>
#define DIM 10

int main() {
    int i=0;
    char a[DIM], b[DIM], c[2*DIM];
    printf("Insert first world of %d characters \n", DIM-1);
    scanf("%s", a);
    printf("Insert second world of %d characters \n", DIM-1);
    scanf("%s", b);
    while(i<DIM-1) {
        c[i]=a[i];
        c[i+DIM]=b[i];
        i++;
        }
     c[DIM-1]=' ';
     c[2*DIM-1]= '\0';
     printf("\nThe string is: %s ", c);
     return 0; 
     }
