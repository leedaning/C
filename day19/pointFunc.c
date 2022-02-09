/**
 * @file pointFunc.c
 * @author your name (you@domain.com)
 * @brief 返回指针的函数
 * @version 0.1
 * @date 2022-01-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int * f(int *);
void ft(void);

int main(int argc, char const * argv[]){
    int * p;
    int num = 200;
    printf("Number num = %d, address is %#x\n", num, &num);

    p = f(&num);
    printf("Point func is %s, p = %d, address is %#x\n", __func__, *p, &p);
    ft();
    return 0;
}


int * f(int * p){

    // int i = 18;
    *p += 10;
    printf("Point func is %s, p = %d, address is %#x\n", __func__, *p, &p);

    return p;
}

void ft(void){

    int k = 23;
    printf("k in %s func, k = %d, address is %#x", __func__, k, &k);
}
