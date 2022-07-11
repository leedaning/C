/**
 * @file: scanf_02.c
 * @author: Leen
 * @brief: 
 * @version: 0.1
 * @date: 2022-02-17 11:55:39
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

void fir(void);
void sec(void);
void thi(void);

int main(int argv, char const * argc[]){

    // fir();
    // sec();
    thi();
    return 0;
}

void thi(void){

    /* int num = 0, number = 0;

    scanf("%*d %d", &num, &number);
    
    printf("num is %d, number is %d\n", num, number);
    printf("hexadecimal = %#x; oxctl = %o\n", num, num);

    scanf("%i", &number);
    printf("number decimal = %d, hexadecimal = %#x, oxctl = %o\n", number, number, number); */

    char * str = "Leen,male,18";
    char name[20], sex[10];             // 不可以使用char * name, * sex;这种格式定义的指针字符串
    int age;

    /* name = "Leen";
    sex = "male";
    age = 18; */
    /* scanf("%[^,],%[^,],%[^]", name, sex, age);
    printf("name is %s, sex is %s, age is %d\n", name, sex, age); */
    int input_num = scanf("%[^,],%[^\n]", name, sex);           // ^：从头开始; \n:表示直到遇到换行符结束；
    int output_num = printf("name is %s, sex is %s\n", name, sex);
    printf("scanf input number is %d, printf output number is %d\n", input_num, output_num);
    getchar();
}


void sec(void){

    char str1[20], str2[30];

    printf("Enter name: ");
    scanf("%19s", str1);

    printf("Enter your website name: ");
    scanf("%29s", str2);

    printf("Entered Name: %s\n", str1);
    printf("Entered Website:%s", str2);
}

void fir(void){

    int num;
    int number;
    char * ch;

    printf("请输入num的值:\n");
    scanf("%d", &num);
    printf("num is %d\n", num);

    
    printf("请输入number的值:\n");
    scanf("%d", &number);
    printf("number is %d\n", number);
    getchar();

    /* printf("请输入ch的值:\n");
    scanf("%c", &ch);
    printf("ch is %c\n", ch);

    getchar(); */
}
