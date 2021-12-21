#include <stdio.h>

void point(void);
void point_01(int *p);  // 参数需要指针类型
void show(int i);
void arrf(int arr[], int *p);

int main(void){

    int i = 10;
    int arr[3] = {11, 12, 13};
    int *p;
    p = &i;

    printf("i=%d, i地址：%#x\n", i, &i);
    printf("i=%d, p=%#x, *p=%#x\n", i, p, &p);
    // point();
    // point_01(&i);
    // show(i);

    printf("数组arr的sizeof为：%lu，指针p的sizeonf为：%lu\n", sizeof(arr), sizeof(p));
    printf("arr的地址为：%#x, arr[0]的地址为：%#x, * arr的地址为：%#x\n", arr, &arr[0], &arr);
    printf("数组第一个值为：%d\n", arr[0]);
    arrf(arr, p);
    printf("数组第一个值为：%d\n", arr[0]);
    printf("指针当做数组使用，第一个值为：%d\n", p[0]);

    return 0;
}

// void arrf(int *arr, int *p){
void arrf(int arr[], int *p){

    printf("数组的sizeof为：%lu， [p]的sizeof为：%lu，arr的地址为：%x\n", sizeof(arr), sizeof(p), arr);
    arr[0] = 12;
}

void show(int i){
    printf("i的值为：%d\n", i);
}

void point_01(int *p){

    printf("指针地址为：%#x， 值为：%d\n", p, *p);
    *p = 99;
}

void point(void){

    int i;          // 普通变量，内存空间中存放的变量值
    int* p = &i;    // 将i的内存地址存放到指针p的内存空间中
    // int* p, q;  // p是指针，q是int类型的变量不是指针
    // int *p, q;  // p是指针，q是int类型的变量不是指针
    // int *p, *q; // p和q都是指针类型的变量
    
}