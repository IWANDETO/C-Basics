#include <stdio.h>

/* This program prints a fahrenheit temperature table and their centigrade or celsius equivalents*/

int main ()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  /*Lower limit of the temperature table*/
    upper = 300; /*Upper limit of the temperature table*/
    step = 20; /*Step size (increment)*/
    
    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n",  fahr, celsius);
        fahr = fahr + step;
    }

    return(0);
}