#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void method_01(void);
void method_02(void);
void method_03(void);

int main(void){

    // method_01();
    // method_02();
    method_03();

    return 0;
}

void method_03(){

    char str[] = "hello";
    char * p;
    p = strchr(str, 'l');
    
    printf("字符串为：%s\n", str);
    printf("l及后面的字符串为：%s\n", p);

    
    char c = *p;
    *p = '\0';
    char * cpy = (char *)malloc(strlen(str)+1);
    cpy = strcpy(cpy, str);
    printf("l前面的字符串为：%s\n", str);

    *p = c;
    printf("字符串为：%s\n", str);
    printf("l前面的字符串为：%s\n", cpy);
    free(cpy);
}


void method_02(){

    char str[] = "hello";
    char *p = strchr(str, 'l');
    char * cpy = (char *)malloc(strlen(p)+1);
    strcpy(cpy, p);
    
    printf("第一个l后面的字符串为：%s\n", cpy);
    p = strchr(++p, 'l');
    printf("第二个l后面的字符串为：%s\n", p);
    printf("%s\n", str);
    free(cpy);
}

void method_01(){

    char str[] = "hello";
    char *p = strchr(str, 'l');

    printf("%s\n", p);
}
