#include <stdio.h>

int add(int num1, int num2);        // 函数的声明

int main(void){
    int a, b, res;

    scanf("%d %d", &a, &b);
    res = add(a, b);
    printf("res:%d\n", res);

    return 0;
}


int add(int num1, int num2){        // 函数的定义，带有函数体{}

    return num1 + num2;
}
