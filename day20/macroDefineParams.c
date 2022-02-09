/**
 * @file macroDefineParams.c
 * @author your name (you@domain.com)
 * @brief �������ĺ�
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define CUBE(x) ((x)*(x)*(x))   // �������ĺ�
#define MALLOCS(len, type) (type *)((len)*sizeof(type))
#define RADTODEG(x) ((x) * 57.29578)    // �ӻ���ת��Ϊ�Ƕ�(��ȷ)
#define RADTODEG1(x) (x * 57.29578)     // �ӻ���ת��Ϊ�Ƕȣ�����
#define RADTODEG2(x) (x) * 57.29578     // �ӻ���ת��Ϊ�Ƕȣ�����

int cubes(int x);       // ��������

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