#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int len(char *);

int main () {
  char string[MAX];
  printf("\nInsert a string without spaces:");
  scanf("%s", string);
  printf("Length: %d", len(string));
}

int len(char *stri){
  int count =0;
  while (*stri!='\0' && count<MAX) {
    stri++;
    count++;
  }
return(count);
}
