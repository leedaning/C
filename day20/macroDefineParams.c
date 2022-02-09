/**
 * @file macroDefineParams.c
 * @author your name (you@domain.com)
 * @brief 带参数的宏
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define CUBE(x) ((x)*(x)*(x))   // 带参数的宏
#define MALLOCS(len, type) (type *)((len)*sizeof(type))
#define RADTODEG(x) ((x) * 57.29578)    // 从弧度转换为角度(正确)
#define RADTODEG1(x) (x * 57.29578)     // 从弧度转换为角度（错误）
#define RADTODEG2(x) (x) * 57.29578     // 从弧度转换为角度（错误）

int cubes(int x);       // 立方函数

int main(int argc, char const * argv[]){

    int x = 2;

    printf("%d cube is %d\n", x, CUBE(x));
    printf("%d cube is %d\n", x, cubes(x));

    int * p = MALLOCS(6, int);
    printf("p cube is %#x\n", &p);

    printf("%f\n", RADTODEG(5+2));
    printf("%f\n", RADTODEG1(5+2));
    printf("%f\n", 180/RADTODEG2(1));
    return 0;
}

int cubes(int x){

    return x * x * x;
} 