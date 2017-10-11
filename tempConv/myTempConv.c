#include <stdio.h>

int main() {
  int fahr, cels;
  int start, step, end;

  start = 0;
  step = 20;
  end = 300;

  fahr = start;
  while (fahr<=end) {
    cels = 5 * (fahr-32) / 9;
    // printf("%d\t%d\n", fahr, celsius);
    printf("%3.1d %6.2d\n", fahr, cels);
    fahr = fahr + step;
  }

  return 0;
}
