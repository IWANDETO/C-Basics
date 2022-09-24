#include <stdio.h>
/* This is a function to show the data types in size
 * In this function we will print out the number of bytes occcupied by each data type
 * using the printf function
 */

int main(){
    printf("size of int: %ld \n", sizeof(int));
    printf("size of char: %ld \n", sizeof(char));
    printf("size of double: %ld \n", sizeof(double));
    printf("size of float: %ld \n", sizeof(float));
 //we use the format specifier %ld(long decimal) which is the first argument and outputs a string with %ld
 //the second argument returns the sizeof value
 //our resulting output will be a long decimal which is replaced by the value of the second argument
    return(0);
//when the functions returns a zero, it means that the function executed successfully
}
