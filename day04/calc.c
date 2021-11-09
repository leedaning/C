#include <stdio.h>

int main(void)
{
    int big, litter, res;
    printf("请输入数据，中间用空格分开\n");

    scanf("%d %d", &big, &litter);
    res = big - litter;
    printf("两数相减的结果为：%d", res);

    return 0;
}