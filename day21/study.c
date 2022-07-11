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
#include "header.h"
#include "common.h"

int main(int argv, char const * argc[]){

    int a = 10, b = 12;     // TODO:
    struct student John;
    John.name = "Johns";
    John.age = 18;
    printf("a = %d, b = %d, max is %d, number is %d, min is %d\n", a, b, number, maxNum(a, number), minNum(a, b));
    printf("Student name is %s, age is %d\n", John.name, John.age);
    getchar();
    return 0;
}