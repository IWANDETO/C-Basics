#include <stdio.h>
#include <stdlib.h>
/*
This is a program to demonstrate variables in C
Variables are basically placeholders for something else in programming
*/
int main()
{
    //we are going to use mathematical formulas to calculate age
    int age;
    int currentyear;
    int birthyear;
    // we have created our variables above

    currentyear=2022;
    birthyear=1972;
    //we have assigned values to our variables above

    age = currentyear - birthyear;
    //we use the above variables to calculate the value of age

    printf("C is %d years old!\n", age);
    return 0;
}
