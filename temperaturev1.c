#include <stdio.h>

/*Print Fahrenheit-Celsius Table using the for loop variation*/

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    //%3d prints as decimal integer at least 6 characters wide
    //%6.1 prints a floating point at least 6 characters wide and 2 after decimal point
    return(0);
}