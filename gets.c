#include <stdio.h>
/* This is a program function that demontrates the use of gets in C
 *Returns 0 when the program executes succesfully
 */

int main(){
    
     printf("Enter a string:");
    char b[100];
//we set the maximum allocation of memory to 100 using [100]
    gets(b);
    printf("You entered: %s", b);
//note how this time we used %s for a string and not %c for a character

    return(0);
}
