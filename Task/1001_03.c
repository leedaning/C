#include <stdio.h>

// 使用短除法（倒除法）

void main(void){

    int m, n, max, min, least_common_multiple, greatest_common_divisor = 1;

    printf("请输入两个整数（用空格隔开），分别求两个数的最小公倍数及最大公约数\n");

    scanf("%d %d", &m, &n);
    m>n ? (max = m, min = n) : (max = n, min = m);
    for (int i = 2; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            max /= i;
            min /= i;
            greatest_common_divisor *= i;
            i = 1;      //将i重置为1 （循环末尾会i++）
        }
    }
    least_common_multiple = greatest_common_divisor * max * min;

    printf("\n最大公约数为：%d, 最小公倍数为：%d", greatest_common_divisor, least_common_multiple );
    
}