#include <stdio.h>
#define MAX 10

int main() {
    int i, j, dim=0, number, removed=0, op=-1;
    int a[MAX];
    while(op) {
        printf("\nWhat do you want to do? \n0: Exit \n1: Add element \n2: Remove element \n3: Visualize elements\n");
        scanf("%d", &op);
        switch(op) {
            case 1:
                if(dim<MAX) {
                    printf("\nInsert number:\n");
                    scanf("%d", &number);
                    a[dim++]=number;
                    }
                else
                    printf("Full array");
                break;
            case 2:
                if(dim>0) {
                    printf("\nInsert number:\n");
                    scanf("%d", &number);
                    i=0;
                    while((i<dim)&&(!removed)) {
                        if(a[i]==number) {
                            removed=1;
                            j=i;
                            dim--;
                            while(j<dim) {
                                a[j]=a[j+1];
                                j++;
                                }
                            }
                        i++;
                    }
                    if(i!=removed)
                        printf("Element was not present");
                    else
                        printf("Element %d eliminated", number);
                   }
                else
                    printf("Empty array");
                break;
            case 3:
                if(dim>0) {
                   printf("\nArray:\n");
                   i=0;
                   while(i<dim) {
                        printf("%d \t", a[i]);
                        i++;
                        }
                    }
               else
                   printf("Empty array");
                break;
                }
            }
        }
