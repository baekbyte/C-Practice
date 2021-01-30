#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
void print_characters(char c, int n);

int findMax(int x, int y);

int main(void) { 
  int result;

  print_characters('A', 10);
  result =  findMax(10,4);

  printf("%d\n", result);



  return 0;

}

void print_characters(char c, int n){
  int i = n;
  while(i>0){
    printf("%c", c);
    i--;
    }
    printf("\n");
}


int findMax(int x, int y){
  int result;

  if (x>y){
    result = x;
  }
  else{
    result = y;
  }
  return result;

}




