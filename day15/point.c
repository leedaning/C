#include <stdio.h>

void method_01(void);
void method_02(void);
void method_03(void);
void method_04(void);
void method_05(int *p);

int main(void){

    // method_01();
    // method_02();
    // method_03();
    method_04();

    return 0;
}

void method_01(void){

    int i = 10;
    int p;

    // 变量i和p的内存地址分别为0x61fdec、0x61fde8，相差4，刚好是int的一个sizeof(int)长度，4个字节
    printf("变量i的值为：%d， 内存地址为：%#x\n", i, &i);
    printf("变量p的值为：%p， 内存地址为：%#x\n", p, &p);
}

void method_02(void){
    
    int i = 10;
    int *p;
    p = &i;

    printf("变量i的值为：%d， 内存地址为：%x， 内存地址为：%#x， 内存地址为：%p\n", i, &i, &i, &i);
    printf("指针p的值为：%d， 内存地址为：%x， 内存地址为：%#x， 内存地址为：%p\n", *p, &p, &p, &p);
}

/**
 * @brief 
 * 输出结果：
 * 数组的地址为：0x61fdc0
 * 数组的地址为：0x61fdc0
 * 数组第一个元素的地址为：0x61fdc0
 * 数组第二个元素的地址为：0x61fdc4
 */
void method_03(void){

    int arr[10];

    printf("数组的地址为：%#x\n", &arr);
    printf("数组的地址为：%#x\n", arr);
    printf("数组第一个元素的地址为：%#x\n", &arr[0]);
    printf("数组第二个元素的地址为：%#x\n", &arr[1]);
}

void method_04(void){

    // 这样给指针赋值有问题，是怎么回事儿？
    /* int *p, q;
    q = 100;
    *p = (int)&q; */

    // 这样给指针赋值就可以
    int q = 100;
    int *p = &q;

    printf("q的地址为：%#x\n", &q);
    printf("p的地址为：%#x, 值为：%#x，指针地址为：%p\n", &p, p, p);       // 对指针取地址，得到的是指针的地址；指针的值是另外一个变量的地址。
    /* 结果为：
    p的地址为：0x61fde0, 值为：0x61fdec
    q的地址为：0x61fdec */

    method_05(p);
    printf("q的地址为：%#x, 值为：%d\n", &q, q);
}

void method_05(int *p){
    printf("指针参数的值为：%#x， 十进制为：%d，指向的变量的值为：%d\n", p, p, *p);
    *p = 200;
}
