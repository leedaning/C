/**
 * @file common.h
 * @author your name (you@domain.com)
 * @brief ���������ļ�
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * extern�����������ĺ��������ڱ��Դ�ļ��ж���
 * 
 */
#ifndef _HEADER_H

    #define _HEADER_H //��ֹ�ظ�����

    extern int number;  // ���߱�����������Ŀ��ĳ���ط��и���������number
    
    struct student{     // �����ṹ�壬ǰ�治��Ҫ��extern
        char * name;
        int age;
    };


    extern int maxNum(int a, int b);
    extern int minNum(int a, int b);
#endif

