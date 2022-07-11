/**
 * @file printf.c
 * @author your name (you@domain.com)
 * @brief ��׼���
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
    int number;     // �ַ�����

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
    printf("%#x\n", num);       // 16����ֵ
    printf("%o\n", num);        // 8����ֵ
    printf("%#o\n", num);        // 8����ֵ
    printf("%f\n", f);
}

void secVar(void){

    int num = 10;
    int number = 2;

    printf("%f\n", PI);
    printf("%10.2f\n", PI);             // 10���ܿ��Ϊ10��2��С������汣����λ
    printf("%10.f\n", PI);              // �ܿ��Ϊ10��ֻҪС����ǰ��Ĳ��֣����沿�ֲ�Ҫ
    printf("%*f\n", num, PI);           // *����ʾʹ�õ�һ�������滻
    printf("%*.*f\n", num, number, PI);

}

void firVar(void){

    int num = 1024;
    int negative = -1024;

    printf("This is printf function.\n");
    printf("The PI is:%10f\n", PI);
    printf("%d\n", num);            // �������
    printf("%-10d\n", num);         // -�������
    printf("%+10d\n", num);         // +����ǰ���+��-
    printf("%+10d\n", negative);    // +����ǰ���+��-
    printf("% 10d\n", num);         // ��space������������
    printf("%010d\n", num);         // 0:0���
    printf("%10d\n", num);          // ռ10���ֽ�
}

