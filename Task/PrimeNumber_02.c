#include <stdio.h>

// 输出100以内的素数

void getRangePrime(void);
short judgePrime(int num);
void getNumPrime();

int main(void){

    getRangePrime();
    getNumPrime();

}

// 获取指定数量的素数
void getNumPrime(){

    int i = 1, count = 0, num;
    short is_prime;

    printf("请输入需要的素数个数\n");
    scanf("%d", &num);
    printf("输出的%d个素数如下：\n");
    while (count<num)
    {
        is_prime = judgePrime(i);
        if (is_prime==1)
        {
            count++;
            printf("%d\t ", i);
            if (count % 5 == 0)
            {
                printf("\n");
            }
            
        }        
        i++;
    }    
}

// 求某个范围内的素数
void getRangePrime(void){

    int range_num;
    short prime_num;
    printf("请输入一个数字，以确定素数范围\n");
    scanf("%d", &range_num);

    /* while (range_num>0)
    {
        prime_num = judgePrime(range_num);
        if (prime_num==1)
        {
            printf("数字%d是素数\n", range_num);
        }else{
            printf("数字%d不是素数\n", range_num);
        }
        range_num--;
    } */

    printf("%d以内的素数有：\n", range_num);
    for (int i = 1; i <= range_num; i++)
    {

        prime_num = judgePrime(i);
        if (prime_num==1)
        {
            printf("%d ", i);
        }
    }
}

// 判断一个数是否是素数
short judgePrime(int num){
    int i = 2;
    short is_prime = 1;

    while (num / i >= i)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
        i++;
    }
    
    return is_prime;
}
