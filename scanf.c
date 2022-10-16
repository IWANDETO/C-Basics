#include <stdio.h>
/* This function is used to demonstrate the scanf function in C
 * Returns a zero if the function runs successfully
 */

int main(){
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("The sum of the values entered is :",a+b);

// we use %d since we are entering the value of two integers which are whole numbers
// We use an & before the integer unless its an array  
    return(0);
}