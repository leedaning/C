#include <stdio.h>

void method_01(void);
int myStrlen(char const * st);

int main(int argc, char const * argv[]){

    // char * st = "Leen";
    char st[] = "Leen";

    printf("sizeof = %d, adds = %#x\n", sizeof(st), st);
    printf("strlen = %d, adds = %#x\n", strlen(st), st);
    printf("myStrlen = %d, adds = %#x\n", myStrlen(&st), st);
    return 0;
}

int myStrlen(char const * st){

    int len = 0;
    while (st[len]!='\0')
    {
        len++;
    }
    
    return len;
}