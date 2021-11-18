#include <stdio.h>

// 辗转相除法
int main(void){

    int a, b, remainder;

    printf("请输入两个数，求最大公约数\n");
    scanf("%d %d", &a, &b);
    while (b!=0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("最大公约数为：%d", a);
    return 0;
}