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
    
    printf("�ַ���Ϊ��%s\n", str);
    printf("l��������ַ���Ϊ��%s\n", p);

    
    char c = *p;
    *p = '\0';
    char * cpy = (char *)malloc(strlen(str)+1);
    cpy = strcpy(cpy, str);
    printf("lǰ����ַ���Ϊ��%s\n", str);

    *p = c;
    printf("�ַ���Ϊ��%s\n", str);
    printf("lǰ����ַ���Ϊ��%s\n", cpy);
    free(cpy);
}


void method_02(){

    char str[] = "hello";
    char *p = strchr(str, 'l');
    char * cpy = (char *)malloc(strlen(p)+1);
    strcpy(cpy, p);
    
    printf("��һ��l������ַ���Ϊ��%s\n", cpy);
    p = strchr(++p, 'l');
    printf("�ڶ���l������ַ���Ϊ��%s\n", p);
    printf("%s\n", str);
    free(cpy);
}

void method_01(){

    char str[] = "hello";
    char *p = strchr(str, 'l');

    printf("%s\n", p);
}
