/**
 * @file common.h
 * @author your name (you@domain.com)
 * @brief 公共函数文件
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * extern：表明声明的函数可能在别的源文件中定义
 * 
 */
#ifndef _HEADER_H

    #define _HEADER_H //防止重复引用

    extern int number;  // 告诉编译器，在项目的某个地方有个变量叫做number
    
    struct student{     // 声明结构体，前面不需要加extern
        char * name;
        int age;
    };


    extern int maxNum(int a, int b);
    extern int minNum(int a, int b);
#endif

