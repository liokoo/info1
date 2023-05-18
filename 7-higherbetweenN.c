#include <stdio.h>

int main(){
    int i, num=1, max=0;
    while(num!=0) {
        printf("Insert number: \n");
        scanf("%d", &num);
        if(num>max)
           max=num;
        i++;
        }
    printf("Highest number between these %d number is %d", i, max);
    return 0;
    }
