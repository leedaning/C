/**
 * @file printf.c
 * @author your name (you@domain.com)
 * @brief 标准输出
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define PI 3.1415926

void firVar(void);
void secVar(void);
void thiVar(void);
void fourVar(void);

int main(int argv, char const * argc[]){

    firVar();
    // secVar();
    // thiVar();
    // fourVar();
    return 0;
}
void fourVar(void){

    int num = 1024;
    int number;     // 字符个数

    char ch = 'A';
    char str[] = "Leen";

    printf("%c%n\n", ch, &number);
    // printf("%s%n\n", str, &number);
    printf("\n%d\n", number);
    getchar();
}

void thiVar(void){

    int num = 65;
    char ch = 'A';
    float f = 12.123;

    printf("%d\n", num);
    printf("%c\n", num);
    printf("%hd\n", num);
    printf("%hhd\n", num);
    printf("%#x\n", num);       // 16进制值
    printf("%o\n", num);        // 8进制值
    printf("%#o\n", num);        // 8进制值
    printf("%f\n", f);
}

void secVar(void){

    int num = 10;
    int number = 2;

    printf("%f\n", PI);
    printf("%10.2f\n", PI);             // 10：总宽度为10；2：小数点后面保留两位
    printf("%10.f\n", PI);              // 总宽度为10，只要小数点前面的部分，后面部分不要
    printf("%*f\n", num, PI);           // *：表示使用第一个参数替换
    printf("%*.*f\n", num, number, PI);

}

void firVar(void){

    int num = 1024;
    int negative = -1024;

    printf("This is printf function.\n");
    printf("The PI is:%10f\n", PI);
    printf("%d\n", num);            // 正常输出
    printf("%-10d\n", num);         // -：左对齐
    printf("%+10d\n", num);         // +：在前面放+或-
    printf("%+10d\n", negative);    // +：在前面放+或-
    printf("% 10d\n", num);         // （space）：正数留空
    printf("%010d\n", num);         // 0:0填充
    printf("%10d\n", num);          // 占10个字节
}

