#include <stdio.h>

int main(void){

    putchar('A');
    putchar('a');
    putchar(65);
    putchar('\n');
    
    char ch;
    for(ch = 'A' ; ch <= 'Z' ; ch++) {
        putchar(ch);
    }

    putchar('\n');
    int i;
    for ( i = 65; i < 91; i++)
    {
        putchar(i);
    }

    return 0;
}