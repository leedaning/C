#include <stdio.h>

// 使用结构体，实现方法返回多个参数

struct data
{
    int least_common_multiple;  // 最小公倍数
    int greatest_common_divisor; //最大公约数
};

struct data method_01(int min, int max);

int main(void){

    int m, n, min, max;
    struct data res;

    printf("\n请输入两个整数（用空格隔开），分别求两个数的最小公倍数及最大公约数\n");
    scanf("%d %d", &m, &n);
    printf("\n输入的两个数分别为:%d %d", m, n);

    m>n ? (max = m, min = n) : (max = n, min = m);
    printf("\nm = %d, n = %d", m, n);

    res = method_01(min, max);
    printf("\n最大公约数为：%d, 最小公倍数为：%d", res.greatest_common_divisor, res.least_common_multiple );

    return 0;
}

struct data method_01(int min, int max){

    struct data res;

    for (int i = min; i > 0; i--)
    {
        if ((max % i == 0) && (min % i == 0))
        {
            res.greatest_common_divisor = i;
            break;
        }
    }

    for (int j = max; j <= max * min; j++)
    {
        if ((j % max == 0) && (j % min == 0))
        {
            res.least_common_multiple = j;
            break;
        }
        
    }
    return res;
}