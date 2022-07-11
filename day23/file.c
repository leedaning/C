/**
 * @file: file.c
 * @author: Leen
 * @brief: 文件的输入输出
 * @version: 0.1
 * @date: 2022-02-17 16:24:20
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

void input(void);
void output(void);

int main(int argv, char const * argc[]){

    input();
    // output();
    return 0;
}

void input(){

    char str[20];

    printf("请输入字符串信息:\n");
    scanf("%[^\n]", str);       // 直接使用%s，读取到空格时会结束读取。所以使用%[^\n]
    printf("输入的字符串信息为：%s", str);
}

void output(){

    printf("Hello everyone!");
}
