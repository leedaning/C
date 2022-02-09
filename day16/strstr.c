#define _GNU_SOURCE             // 宏定义必须有，否则编译会有Warning警告信息
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// extern char *strcasestr(const char *, const char *);         // 也能消除Warning警告

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
    // char *strcasestr(const char *s1, const char *s2);       // 从str中找到满足str2的字符串，输出str2及之后的字符串。不区分大小写
    // char * res = strcasestr(str, str2);
    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);
    // printf("res = %s\n", res);
    getchar();
}

void method_01(){

    char str[] = "Hello leen";
    char str2[] = "e";

    char * res = strstr(str, str2);     // 从str中找到满足str2的字符串，输出str2及之后的字符串。严格区分大小写
    // char * strstr(const char *s1, const char *s2);
    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);
    printf("res = %s\n", res);
}

