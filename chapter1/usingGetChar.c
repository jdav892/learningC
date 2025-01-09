#include <stdio.h>

int main() /* copy input to ouput; 1st version*/
{
  int c;
  c = getchar();

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
