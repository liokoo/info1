#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main() {
    int num, i=0, found=0;
    int vect[MAX];
    srand(time(NULL));
    while(i<MAX) {
        vect[i]=rand()%100+1;
        i++;
        }
    printf("Insert number searched:");
    scanf("%d", &num);
    i=0;
    while((i<MAX) && (!found)) {
        if(vect[i]==num)
            found=1;
        i++;
        }
    if(found==1)
        printf("Number found in %d position", i-1);
    else
        printf("Number didn't found");
    }
