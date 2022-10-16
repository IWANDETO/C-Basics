#include <stdio.h>

/*This program copies input to its output one character at a time*/

int main()
{
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
    //EOF stands for End of File
    //we use int c since char is not big enough to hold EOF in addition to any possible char
}