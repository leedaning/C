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

    // char ch[] = {'H', 'e', 'l', 'l', 'o'};     // 字符数组
    // char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};     // 字符串，比字符数组最后多了0

    // 字符串变量，编译器会自动在结尾生成0
    char * str = "Hello str.";          // 相当于const char * str = "Hello str.";  定义之后，不可以修改其中的元素，如：str[0] = 'B';
    char * str2 = "Hello str.";
    char word[] = "Hello str.";        // 可以修改其中的元素，如：word[0] = str[0] = 'B';
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

