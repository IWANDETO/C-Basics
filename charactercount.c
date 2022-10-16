#include <stdio.h>

/*This program counts characters in input*/

int main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
    ++nc;
    printf("%ld\n", nc);
}