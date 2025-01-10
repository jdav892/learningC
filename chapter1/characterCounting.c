#include <stdio.h>

int main() {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  // ld signals to prinf the corresponding argument is a long integer
  printf("%ld\n", nc);
}
