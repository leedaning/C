/**
 * @file: file.c
 * @author: Leen
 * @brief: �ļ����������
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

    printf("�������ַ�����Ϣ:\n");
    scanf("%[^\n]", str);       // ֱ��ʹ��%s����ȡ���ո�ʱ�������ȡ������ʹ��%[^\n]
    printf("������ַ�����ϢΪ��%s", str);
}

void output(){

    printf("Hello everyone!");
}
