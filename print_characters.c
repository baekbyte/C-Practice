#include <stdio.h>


void print_characters(char c, int n);

int main(void) {

  int i;
  char c = 'a';

  for(i=1; i<=26; i++){
    print_characters(c, i);
    c++;
  }



  return 0;
}

void print_characters(char c, int n){
  int i = n;
  for (i=0; i<n; i++){
    printf("%c", c);
    }
    printf("\n");
}

