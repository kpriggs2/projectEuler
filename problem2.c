#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int a = 1 , b = 1, c = 0, sum = 0;

  while(c < 4000000) {
    c = a + b;
    b = a;
    a = c;
    if(c % 2 == 0) {
      sum = sum + c;
    }
  }
  printf("%d\n", sum);
}
