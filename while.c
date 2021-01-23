#include <stdio.h>
int main(void) {

  int N, sum=0;

  scanf("%d", &N);

  while(N>0){
    sum += N;
    scanf("%d", &N);

  }
  printf("%d", sum);
  return 0;
}
