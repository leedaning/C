#include <stdio.h>

int main(void){

    char c = 255;
    unsigned char ch = 255;
    int i = 255;
    ch = ch + 1;
    printf("char is :%d\n", c);
    printf("unsigned char is :%d\n", ch);
    printf("int is :%d\n", i);

    int a=0, b=0;
    while (++a >= 0)
    ;
    a = a - 1;

    printf("a is %d\n", a);
    
    int len = 1;
    while (a/=10 > 0)
    {
        len++;
    }
    printf("len is %d\n", len);

    return 0;
}