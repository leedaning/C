#include <stdio.h>

// 求最大公约数和最小公倍数

struct res{
    int max_divisor;        // 最大公约数
    int min_multiple;       // 最小公倍数
};
struct res divisorMultiple(int num_01, int num_02);


int main(void){

    int max_num, min_num;
    struct res data;

    printf("请输入两个整数，用空格隔开\n");
    scanf("%d %d", &max_num, &min_num);
    printf("max_num=%d, min_num=%d\n", max_num, min_num);

    /* if (min_num>max_num)
    {
        min_num = min_num ^ max_num;
        max_num = min_num ^ max_num;
        min_num = min_num ^ max_num;
    }
    printf("max_num=%d, min_num=%d\n", max_num, min_num); */

    data = divisorMultiple(max_num, min_num);
    printf("max_num=%d, min_num=%d\n", data.max_divisor, data.min_multiple);

    return 0;
}

struct res divisorMultiple(int num_01, int num_02){

    int divisor = 2, min_num = 1, max_num;
    struct res data;

    while (num_01 / divisor > 0 && num_02 / divisor > 0)
    {
        if (num_01 % divisor != 0 || num_02 % divisor != 0)
        {
            divisor++;
            continue;
        }
        num_01 /= divisor;
        num_02 /= divisor;
        min_num *= divisor;
        divisor = 2;
    }
    data.min_multiple = min_num;
    data.max_divisor = min_num * num_01 * num_02;
    printf("结果max_num=%d, min_num=%d\n", data.max_divisor, data.min_multiple);
    
    return data;
}