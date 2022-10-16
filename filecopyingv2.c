#include <stdio.h>

/*Copy input to output
This program would be written more concisely by experienced C Programmers
*/

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    putchar(c);

    return(0);
}