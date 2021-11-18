#include <stdio.h>
#include <stdlib.h>

void reverse(int number);   // 数字倒序输出
void reverse2(int number, int digit_length);   // 数字倒序输出，指定输出长度，不够前面凑0
void positive(int number);  // 数字正序每位间隔空格输出
int digitLength(int number);    // 计算数字长度（位数）

int main(void){

    int number;

    printf("请输入一个数字\n");
    scanf("%d", &number);
    // reverse(number);
    positive(number);
    system("pause");
}

// 数字正序每位间隔空格输出
void positive(int number){
    int reverse_number = 0, digit_length;

    digit_length = digitLength(number);
    printf("数字长度为：%d\n", digit_length);

    while(number>0){
        reverse_number = reverse_number * 10 + number % 10;
        number /= 10;
    }
    printf("倒序之后的数字为：%d\n", reverse_number);
    reverse2(reverse_number, digit_length);
}

// 计算数字长度（位数）
int digitLength(int number){

    int lenght = 0;
    while (number>0)
    {
        number = number / 10;
        lenght++;
    }
    return lenght;
}

// 数字倒序输出
void reverse(int number){
    
    int signle_num, temp_num;
    temp_num = number;
    
    /* do{
        signle_num = number % 10;
        printf("%d \t", signle_num);
        number /= 10;
    }while (number > 0); */

    while (number>0)
    {
        signle_num = number % 10;
        printf("%d ", signle_num);
        number /= 10;
    }    
}

// 数字倒序输出
void reverse2(int number, int digit_length){
    
    int signle_num;
    while (digit_length>0)
    {
        signle_num = number % 10;
        printf("%d", signle_num);
        number /= 10;
        if (digit_length>1)
        {
            printf(" ");
        } 
        digit_length--;        
    }    
}
