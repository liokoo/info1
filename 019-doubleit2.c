#include <stdio.h>

int main() {
    int a=5,b=8,c=3;
    int* p;
    char ans;
    printf("a=%d, b=%d, c=%d\n", a,b,c);
    do {
        printf("What var do you want to double?\n");
        printf("Press f to pay respect\n");
        scanf("%c", &ans);
        switch(ans){
            case 'a':
                p=&a;
                break;
            case 'b':
                p=&b;
                break;
            case 'c':
                p=&c;
                break;
            case 'f':
                printf("Respect\n");
                p=NULL;
            default:
                printf("Var not valid\n");
                p=NULL;
                break;
            }
            if(p!=NULL)
                *p = *p * 2;
            printf("a=%d, b=%d, c=%d\n", a,b,c);
        
    } while(ans!='f') ;
}
