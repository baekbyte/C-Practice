#include <stdio.h>
int main(void) {

  int N;
  printf("input a number: ");
  scanf("%d", &N);

  printf("reverse: ");
  do{
    printf("%d", N%10);
    N= N/10;
  }while(N);

  printf("");
  return 0;
}
