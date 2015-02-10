#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n);


int main(void){

  int i, n, j, x, ans;
  for(i = 1; i <= 999; i++){
    for(j = 1; j <= 999; j++){
      n = i * j;
      
      x = reverse(n);
      
      if((x == n) && (ans < n)){
	ans = n;
	printf("%d\n", ans);
      }
    }
  }
  printf("%d is the answer\n", ans);
}

int reverse(int n){
  int j = 0;
  while (n != 0) {
    j = j * 10;
    j = j + n%10;
    n = n/10;
  }
  return j;
}
