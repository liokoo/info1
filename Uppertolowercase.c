#include <stdio.h>

int main(){
    char upper;
    printf("Insert uppercase char: \n");
    scanf("%c", &upper);
    if((upper >='A') && (upper <= 'Z')) {
        upper = upper+'a'-'A';
        printf("The lowercase char is: %c", upper);
        }
    else
        printf("You did not insert a uppercase char");
    return 0;
    }
