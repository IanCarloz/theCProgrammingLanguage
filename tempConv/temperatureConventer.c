#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main()
{
        int fahr, celsius;
        int lower, upper, step;
        int iteration;

        lower = 0; /* lower limit of temperature scale  */
        upper = 300; /* upper limit */
        step = 20; /* step size */

        iteration = 1;

        fahr = lower;
        while (fahr < upper) {
                celsius = 5 * (fahr-32) / 9;
                printf("%d \t %d \t %d \n", iteration, fahr, celsius);
                fahr = fahr + step;
                iteration = iteration + 1;
        }
        return 0;
}
