#include <stdio.h>

int main(){
    int cat, count, r=1;
    printf("Insert cathetus length: \n");
    scanf("%d", &cat);
    while (r<=cat) {
        count=cat-r;
        while(count<cat){
            printf("*");
            count++;
        }
        printf("\n");
        r++;
        }
    }
