#include <stdio.h>

int main(void) {

  int ch;

  printf("Input: ");
  while(1){

    ch = getchar();




    if (ch>= 'a' && ch<= 'z') putchar(ch);
    else if(ch == '\n') break;
  }

  printf("\n");
  return 0;
}
