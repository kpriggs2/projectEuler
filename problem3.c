#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkprime(long a);
int checkfactor(long b);

int main(void) {

  long n = 600851475143;
  long nhalf = n/2;
  long i;
  long lpf;
  long x, y;
  for (i = 2; i <= nhalf; i++){
    y = checkfactor(i);
    if(y == 1) {
      x = checkprime(i);
      if(x == 1) {
	lpf = i;
	printf("%lu \n", lpf);
      }
    }
  }
  printf("%lu is the largest prime factor\n", lpf);
}

int checkprime(long a){
  long j;
  long x = 0;
  for (j = 2; j <= a - 1; j++) {
    if ((a % j) == 0){
      return 0;
    }
  }
  return 1;
}

int checkfactor(long a) {
  if((600851475143 % a) == 0){
    return 1;
  }
  else {
    return 0;
  }
}
