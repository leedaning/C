#include <stdio.h>

void method_01(void);
void method_02(void);

int main(void){

    // method_01();
    method_02();
    return 0;
}

void method_02(void){

    char * str = "Hello leen.";
    char arr[] = "Hello arr.";
    char * str2;

    str2 = &arr;

    printf("str:%s\n", str);
    printf("str2:%s\n", str2);
    printf("arr:%s\n", arr);

    printf("str address is :%#x\n", str);
    printf("str2 address is :%#x\n", str2);
    printf("arr address is :%#x\n", arr);

}


void method_01(void){

    // char ch[] = {'H', 'e', 'l', 'l', 'o'};     // �ַ�����
    // char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};     // �ַ��������ַ�����������0

    // �ַ������������������Զ��ڽ�β����0
    char * str = "Hello str.";          // �൱��const char * str = "Hello str.";  ����֮�󣬲������޸����е�Ԫ�أ��磺str[0] = 'B';
    char * str2 = "Hello str.";
    char word[] = "Hello str.";        // �����޸����е�Ԫ�أ��磺word[0] = str[0] = 'B';
    // char line[10] = "Hello line.";

    word[0] = 'B';

    printf("str = %#x\n", str);
    printf("str2 = %#x\n", str2);
    printf("word = %#x\n", word);
    // printf("line = %#x\n", line);
    printf("str = %s\n", str);
    printf("str2 = %s\n", str2);
    printf("word = %s\n", word);

}

