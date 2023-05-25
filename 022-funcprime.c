#include <stdio.h>

typedef enum {false, true} YesNo;

YesNo prime (int);
YesNo divisible (int, int);

void main(){
  int num=1;
  while (num!=0) {
    printf ("\nInsert number :");
  scanf ("%d",&num);
  if (prime(num)==true)
    printf ("\nNumber is prime ");
  else
    printf ("\nNumber isn't prime");
  }
}

YesNo prime (int num) {
  int i;
  for (i =2; i < num ; i ++) {
    if (divisible(num,i)==true)
      return (false);
    }
  return(true);
}
  
YesNo divisible (int num, int divider) {
  int rest;
  rest=num%divider;
  if(rest!=0)
    return(false);
  else
    return(true);
}
