#include <stdio.h>

// 使用指针，实现函数返回多个参数

int method_01(int min, int max, int *least_common_multiple, int *greatest_common_divisor){
    
    for (int i = min; i > 0; i--)
    {
        if ((max % i == 0) && (min % i == 0))
        {
            *greatest_common_divisor = i;
            break;
        }
    }

    for (int j = max; j <= max * min; j++)
    {
        if ((j % max == 0) && (j % min == 0))
        {
            *least_common_multiple = j;
            break;
        }
        
    }
}

int main(void){

    int m, n, min, max, least_common_multiple, greatest_common_divisor;

    printf("\n请输入两个整数（用空格隔开），分别求两个数的最小公倍数及最大公约数\n");
    scanf("%d %d", &m, &n);
    printf("\n输入的两个数分别为:%d %d", m, n);

    m>n ? (max = m, min = n) : (max = n, min = m);
    printf("\nm = %d, n = %d", m, n);

    method_01(min, max, &least_common_multiple, &greatest_common_divisor);
    printf("\n最大公约数为：%d, 最小公倍数为：%d", greatest_common_divisor, least_common_multiple );

    return 0;
}