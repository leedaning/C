/**
 * @file common.c
 * @author your name (you@domain.com)
 * @brief 公共函数文件
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "common.h"

extern int maxNum(int a, int b){
    return a > b ? a : b;
}

extern int minNum(int a, int b){
    return a > b ? b : a;
}