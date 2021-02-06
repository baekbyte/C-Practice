#include <stdio.h>


int leftover(int N1, int N2);

int main(void) {
  int num1, num2;
  printf("Enter a dividend : ");
  scanf("%d", &num1);
  printf("Enter a divisor : ");
  scanf("%d", &num2);

  printf("%d", leftover(num1, num2));


  return 0;
}

int leftover(int N1, int N2){

  int result;


  if(N2==0){
    result = N1;
  }

  else{
    result = N1 % N2;
  }

  return result;

}

