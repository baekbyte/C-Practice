#include <stdio.h>
int main(void) {

  int N;
  printf("input a number: ");
  scanf("%d", &N);

  printf("reverse: ");
  while(N>0){
    printf("%d", N%10);
    N= N/10;
  }
  printf("");
  return 0;
}
