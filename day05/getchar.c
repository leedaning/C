#include <stdio.h>

int main(void){

    char x, y = 'A';
    int n = 'A';

    x = getchar();

    putchar(x);
    putchar('\n');
    putchar(y);
    printf("\nn的结果，数字：%*d, 字符：%*C", 10, n, 5, n);

    return 0;
}
