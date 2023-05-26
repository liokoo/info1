#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef enum {false, true} boolean;
float pot(float x , int exp) {
  float power=1.0;
  int positive=true;
  if (exp<0){
    positive=false;
    exp=abs(exp);
  }
  while(exp>0){
    if((exp%2)==1)
      power=power*x;
    x=x*x;
    exp=exp/2;
  }
  if(positive==true)
    return(power);
  else
    return(1.0/power);
}

void main() {
  float cap, interest, amount, matured;
  int years;
  printf ("\nCapital: ");
  scanf ("%f", &cap ) ;
  printf ("\nInterest: ");
  scanf ("%f", &interest );
  printf ("\nYears: ");
  scanf ("%d", &years );
  amount=cap*pot((1+interest), years);
  matured=amount-cap;
  printf ("\nAmount: %f", amount );
  printf ("\nMatured: %f", matured );
}
