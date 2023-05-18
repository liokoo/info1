#include <stdio.h>

int main () {
  int num, min, max;
  printf("Inserisci il numero da valutare: \n");
  scanf("%d", &num);
  printf("Inserisci gli estremi di valutazione: \n");
  scanf("%d %d", &min, &max);
  if((num>min) && (num<max))
      printf("Numero accettato");
  else
      printf("Numero non accettato");
  return 0;
}
