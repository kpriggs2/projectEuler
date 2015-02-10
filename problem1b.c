#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int sum5 = 0, sum3 = 0, tot = 0, i, j, imax, jmax, n = 999;
  for (i = 0; i <= 999; i++){
    if(i % 5 == 0) {
      tot = tot + i;
    }
    else if(i % 3 == 0) {
      tot = tot + i;
    }
  }
  printf("%d", tot);
}
