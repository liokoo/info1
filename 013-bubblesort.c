#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
    int vect[MAX], tmp;
    int i, k=1, change;
    printf("Insert %d numbers \n", MAX);
    i=0;
    while(i<MAX) {
        printf("Number %d: ", i);
        scanf("%d", vect[i]);
        i++;
        }
    change=1;
    while(change) {
          i=0;
          change=0;
          while(i<(MAX-k)) {
              if(vect[i]>vect[i+1]) {
                  tmp=vect[i+1];
                  vect[i+1]=vect[i];
                  vect[i]=tmp;
                  change=1;
                  }
            i++;
            }
          k++;
      }
    printf("\nIn ascending order, the numbers entered are:");
    i=0;
    while(i<MAX) {
        printf("%d \t", vect[i]);
        i++;
        }
    }
