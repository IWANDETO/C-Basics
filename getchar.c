#include <stdio.h>
/*
 * This function demonstrates the the use of getchar in C
 * Return 0
 */

int main(){
    printf("Enter a character:");
    char a = getchar();
//we initialized and assigned getchar to a
    printf("You entered: %c", a);

// we can use getchar to get the value of the character as shown above

   
    return 0;
}
