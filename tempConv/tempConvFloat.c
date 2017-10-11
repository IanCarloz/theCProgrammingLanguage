#include <stdio.h>

main ()
{
  float fahr, celsius;
  int lower, step, upper;

  lower = 0;
  step = 20;
  upper = 300;

  fahr = lower;
  while (fahr<=upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    // celsius = (5/9) * (fahr-32.0);
    printf("%3.0fF %6.1fC\n", fahr, celsius);
    fahr = fahr + step;
  }
}
