#include <stdio.h>

int main(){
  int vet[10]={0,1,2,3,4,5,6,7,8,9};
  int *p1,*p2;
  int posix1, posix2, i, tmp;
  do{
    printf("Enter the positions of the two elements to swap in the form posix1,posix2\n");
    printf("Insert -1,-1 to finish.\n");
    scanf("%d,%d", &posix1, &posix2);
    if((posix1>=0) && (posix1<10))
      p1=&vet[posix1];
    else
      p1=NULL;
    if((posix2>=0) && (posix2<10))
      p2=&vet[posix2];
    else
      p2=NULL;
    if((p1!=NULL) && (p2!=NULL)){
      tmp=*p1;
      *p1=*p2;
      *p2=tmp;
    }
    printf("\n");
    for(i=0; i<10; i++)
      printf("%d\t", vet[i]);
    }while((posix1!=-1) &&(posix2!=-1));
  }
