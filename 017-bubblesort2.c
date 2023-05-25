#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct{
    char code[10];
    char descript[100];
    int qta;
    int price;
    } item;

int main() {
    item warehouse[MAX], tmp;
    int i, j, k=1, change, risp;
    i=0;
    while(i<MAX){
        printf("\nItem %d:", i+1);
        printf("\n Code:");
        scanf("%s", warehouse[i].code);
        printf("\n Description:");
        scanf("%s", warehouse[i].descript);
        printf("\n Amount:");
        scanf("%s", warehouse[i].qta);
        printf("\n Price:");
        scanf("%s", warehouse[i].price);
        i++;
        }
    change=1;
    while(change){
        i=0;
        change=0;
        while(i<(MAX-k)) {
            if(warehouse[i].qta>warehouse[i+1].qta) {
                tmp=warehouse[i+1];
                warehouse[i+1]=warehouse[i];
                warehouse[i]=tmp;
                change=1;
                }
            i++;
            }
        k++;
      }
