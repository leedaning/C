#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number;

    // number = getchar();
    number = 100;

    printf("The number is %d .\n", number);
    printf("10:%d .\n", number);
    printf("0:%o .\n", number);
    printf("0x:%x .\n", number);

    return 0;
}