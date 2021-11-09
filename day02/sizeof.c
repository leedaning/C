#include <stdio.h>
#include <string.h>

int main(void){

    short num, len;
    char str[50] = "leen";

    num = 1024;

    len = sizeof(str);       // res:50;  sizeof求对象的定义长度（字节长度），运算对象可以是任何数据类型或变量
    // len = strlen(str);      // res:4;   字符串的实际长度
    printf("sizeof res:%d", len);
    return 0;
}