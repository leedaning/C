#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // char str[5] = {'L', 'e', 'e', 'n', '\0'};
    char str[5] = "Leen";
    int out_len;        // printf返回的结果，其实是打印的字符的个数
    out_len = printf("字符串输出:%s\n", str);

    printf("%d\n", out_len);

    /* int len = strlen(str);
    printf("字符串长度:%d\n", len); */

    /* int i = 100, num = -2;
    float pi = acos(-1);
    char ch = 'A';

    printf("十进制:%d\n", i);
    printf("十进制:%i\n", i);
    printf("八进制:%o\n", i);
    printf("浮点数:%f\n", pi);
    printf("以指数形式输出单、双精度实数:%e\n", pi);
    printf("以%f或%e中较短输出宽度的一种格式输出单、双精度实数: %g\n", pi);
    printf("输出单个字符:%c\n", ch);
    printf("输出字符串:%s\n", str);
    printf("设定宽度：%*d", 10, i); */

        /* printf("以十进制形式输出无符号整数:%u\n", i);
    printf("八进制:%o\n", num);
    printf("十六进制:%x\n", num); */

    return 0;
}