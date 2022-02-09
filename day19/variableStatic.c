#include <stdio.h>

/**
 * @brief 静态本地变量
 * 
 */

int gAll = 2;

int f(void);

int main(int argc, char const * argv[]){

    f();
    return 0;
}

int f(void){

    static int sAll = 12;
    int i = 22;
    printf("Func is f, global variable gAll add is %#x\n", &gAll);      // 内存地址很小
    printf("Func is f&static local variable sAll add is %#x\n", &sAll); // 内存地址很小
    printf("Func is f, loc&al variable i add is %#x\n", &i);            // 内存地址很大
    return 0;
}