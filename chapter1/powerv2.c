#include <stdio.h>

int main() {
  int i;
  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
}

power(x, n) int x, n;
{
  int i, p;

  for (p = 1; n > 0; --n)
    p = p * x;
  return (p);
}
