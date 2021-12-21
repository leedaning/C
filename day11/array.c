#include <stdio.h>

#include <string.h>

int main(void){

    int number[10] = {0}, len, cnt=0, sum=0, ipt=0;
    double avg = 0;
    len = sizeof(number) / sizeof(number[0]);       //字符长度

    printf("数组字节长度为:%d\n", sizeof(number));        //字节数
    printf("数组字符长度为:%d\n", sizeof(number) / sizeof(number[0]));        //字符长度

    printf("请输入一系列数字，并输出大于平均值的数字\n");
    
    scanf("%d", &ipt);
    while (cnt<len && ipt != -1)
    {
        number[cnt] = ipt;
        sum += ipt;
        cnt++;
        scanf("%d", &ipt);
    }
    
    printf("输入的数字个数为：%d", cnt);
    printf("输入的数字的总和为：%d", sum);

    avg = sum / (cnt + 1.0);
    printf("平均数为：%d", avg);

    /* while (cnt<len)
    {
        if (number[cnt]>avg)
        {
            printf("%d\t", number[cnt]);
        }
    } */

    return 0;
}