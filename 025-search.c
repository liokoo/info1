#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10
#define NOT_FOUND -1

int vect[MAX];
int search(int researched);
int difference(int prev, int succ);

int main(){
  srand(time(NULL));
  int i, number, position;
  for(i=0; i<MAX;i++){
    vect[i]=rand()%100;
    printf ("%d\t", vect[i]);
  }
  printf("\nInsert a number you want to search:");
  scanf("%d", &number);
  position=search(number);
  if(position==NOT_FOUND)
    printf("\nNot Found!");
  else {
    printf("Element %d found in position %d", number, position);
    vect[position]=difference((position-1),(position+1));
  }
}

int search(int researched){
  int j;
  for(j=0;j<MAX;j++)
    if(vect[j]==researched)
      return(j);
    return(NOT_FOUND);
 }
  
 int difference(int prev, int succ) {
   int diff;
   if ((prev<0) || (succ>=MAX) || (prev>succ))
     return(0);
   if(vect[prev]>vect[succ])
     diff=vect[prev]-vect[succ];
   else
     diff=vect[succ]-vect[prev];
   return(diff);
 }   
