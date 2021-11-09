#include <stdio.h>

int main(void){

    int a = 5, b = 3, c = 1;

    c = c ? (a + b) : (a - b);

    printf("\n运算结果为：%d", c);

    return 0;
}