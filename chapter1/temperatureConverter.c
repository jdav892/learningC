#include <stdio.h>

/* print Fahrenheit-Celsius table for
f = 0, 20, ..., 300 */

int main() {
  int lower, upper, step;
  float fahr, celsius;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%4.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
