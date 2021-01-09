#include <stdio.h>

int main(void) {
  int a;
  int b;
  int x;
  int y;
  int gcf;
  int t;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a=x;
  b=y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcf = a;

printf("Greatest common facter of %d and %d = %d\n", x, y, gcf);
  return 0;
}
