#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  double sum5 = 0, sum3 = 0, i, j, imax, jmax, n = 1000;
  imax = n/5 - 1;
  jmax = 999/3;
  for(i = 0; i <= imax; i++) {
    sum5 = sum5 + i*5;
  }
  for(j = 0; j <= jmax; j++) {
    sum3 = sum3 + j*3;
  }
  double tot = sum5 + sum3;
  printf("%lf", tot);
}
