/**
 * @file study.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "common.h"

/* extern int maxNum(int a, int b);
extern int minNum(int a, int b); */

int main(int argv, char const * argc[]){

    int a = 10, b = 12;     // TODO
    printf("a = %d, b = %d, max is %d, min is %d\n", a, b, maxNum(a, b), minNum(a, b));
    
    return 0;
}