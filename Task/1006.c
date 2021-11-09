#include <stdio.h>

int main(void){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    a = a>b ? a : b;
    a = a>c ? a : c;
    printf("最大数为:%d", a);

    return 0;
}