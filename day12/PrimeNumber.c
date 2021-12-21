#include <stdio.h>

// 找素数，首先可以遍历到数字的平方根，如果还没找到能够被整除的数，即为素数
/* 判断一个数是否是素数
1、当前数除以2（减小一半，100的话只要到50即可）
2、当前数的平方根（开根号，100的话只要到10即可）
3、当前数前面（即小于当前数）的所有素数（如：数字7，1、2、3、5都不能成为它的除数） */

int judge_01(int num);
int judge_02(int num);
int judge_03(int num);

int prime[25] = {0};

int main(void){

    int max_num, is_prime, count=0;
    printf("请输入一个数字，并求出所有小于该数字的素数\n");
    scanf("%d", &max_num);

    for (int i = 2; i <= max_num; i++)
    {
        is_prime = judge_03(i);
        if (is_prime)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n素数个数为：%d", count);
    
    return 0;
}

int judge_03(int num){

    int is_prime = 1;
    for (int i = 0; i < sizeof(prime)/sizeof(prime[0]); i++)
    {
        if (num % prime[i] == 0)
        {
            is_prime = 0;
            break;
        }        
    }
    return is_prime;
}

int judge_02(int num){

    int is_prime = 1;
    for (int i = 2; i <= num/i; i++)
    {
        {

            int temp = num/i;
        }
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}

int judge_01(int num){

    int is_prime = 1;
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}
