/**
 * @file common.c
 * @author your name (you@domain.com)
 * @brief 公共函数文件
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 */
#include "header.h"
int number = 20;        // 定义全局变量number，并赋值为20

int maxNum(int a, int b){
    return a > b ? a : b;
}

int minNum(int a, int b){
    return a > b ? b : a;
}