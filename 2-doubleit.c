#include <stdio.h>

int main () {
  int num;
  printf ("Inserisci un numero: \n");
  scanf ("%d", &num);
  num = num*2;
  printf ("Il numero raddoppiato è: %d", num);
  return 0;
}
