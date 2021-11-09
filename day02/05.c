#include <stdio.h>
#include <stdlib.h>n

int main(void){

    char ch;
    ch = getchar();
    while(ch!='#'){
        putchar(ch);
        system("pause");
        ch = getchar();
    }
    return 0;
}