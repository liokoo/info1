#include <stdio.h>

int main(){
    int last=1, beforelast=1, current, i=0, fibnum;
    printf("Insert the number of digits of the Fibonacci series you want to see: \n");
    scanf("%d", &fibnum);
    while(i<fibnum) {
        if(!i)
            printf("\n1: 1");
        else if(i==1)
            printf("\n2: 1");
        else {
             current=last+beforelast;
              last=beforelast;
              beforelast=current;
              printf("\n%d: %d", i+1, current);
        }
      i++;
      }
    }
