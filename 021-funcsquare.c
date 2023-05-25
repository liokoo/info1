#include <stdio.h>

int main(){
  int x ,y;
  for (x =0; x <=7; x ++) {
    y = squ(x);
    printf ("Square of %d is %d\n", x , y );
  }
  for (x =0; x <=7; ++ x)
  printf ("Square of %d is %d\n", x , squ(x));
}

int squ(int in) {
  int var_square;
  var_square=in*in;
  return var_square ;
}
