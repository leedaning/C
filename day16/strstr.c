#define _GNU_SOURCE             // �궨������У�����������Warning������Ϣ
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// extern char *strcasestr(const char *, const char *);         // Ҳ������Warning����

void method_01(void);
void method_02(void);

int main(void){

    // method_01();
    method_02();
    return 0;
}

void method_02(){

    char str[] = "Hello leen";
    char str2[] = "e";
    // char *strcasestr(const char *s1, const char *s2);       // ��str���ҵ�����str2���ַ��������str2��֮����ַ����������ִ�Сд
    // char * res = strcasestr(str, str2);
    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);
    // printf("res = %s\n", res);
    getchar();
}

void method_01(){

    char str[] = "Hello leen";
    char str2[] = "e";

    char * res = strstr(str, str2);     // ��str���ҵ�����str2���ַ��������str2��֮����ַ������ϸ����ִ�Сд
    // char * strstr(const char *s1, const char *s2);
    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);
    printf("res = %s\n", res);
}

