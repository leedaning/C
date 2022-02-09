#include <stdio.h>
/**
 * @brief 全局变量
 * 没有做初始化的全局变量会得到0值，指针会得到NULL值
 * 只能用编译时刻已知的值来初始化全局变量（如：1、int gAll = f(); 2、int gAll = 12; int gTwo = gAll;这两种都是不行的）
 * 他们的初始化发生在main函数之前
 * 如果函数内部存在与全局变量同名的变量，则全局变量会被隐藏
 * 
 * @return int 
 */

int f(void);

int gAll = 12;
// int gAll ;       // 全局变量不赋初值，会被编译器默认赋为0

int main(int argc, char const * argv[]){

    printf("in %s gAll = %d\n", __func__, gAll);
    f();
    printf("agn in %s gAll = %d\n", __func__, gAll);
    return 0;
}

int f(void){

    printf("in %s gAll = %d\n", __func__, gAll);
    gAll = 2;
    printf("agn in %s gAll = %d\n", __func__, gAll);
    return gAll;
}