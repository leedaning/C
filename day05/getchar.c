#include <stdio.h>

int main(void){

    char x, y = 'A';
    int n = 'A';

    x = getchar();

    putchar(x);
    putchar('\n');
    putchar(y);
    printf("\nn�Ľ�������֣�%*d, �ַ���%*C", 10, n, 5, n);

    return 0;
}
