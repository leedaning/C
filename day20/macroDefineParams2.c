/**
 * @file macroDefineParams2.c
 * @author your name (you@domain.com)
 * @brief 带参数的宏
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define MAX(a, b) (a)>(b) ? (a) : (b)
#define MIN(a, b) (a)>(b) ? (b) : (a)

int maxNum(int a, int b);
int minNum(int a, int b);

int main(int argc, char const * argv[]){

    int a = 5, b = 7;
    float c = 8.0;

    printf("a = %d, b = %d, max is %d, min is %d\n", a, b, MAX(a, b), MIN(a, b));
    printf("a = %d, b = %d, max is %d, min is %d\n", a, b, maxNum(a, b), minNum(a, b));
    printf("a = %d, c = %f, max is %d, min is %d\n", a, c, MAX(a, c), MIN(a, c));
    return 0;
}

int maxNum(int a, int b){
    return a > b ? a : b;
}

int minNum(int a, int b){
    return a > b ? b : a;
}



