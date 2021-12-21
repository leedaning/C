#include <stdio.h>

void change(const int * p);     //函数中参数表示const类型的指针，在函数内部不可以修改指针所指变量的值

int main(void){

    int i = 100;
    const int * p;
    p = &i;

    /* printf("变量i的值为：%d\n", i);
    change(&i);         // 既可以使用变量i的地址&i，也可以使用指针p
    printf("变量i的值为：%d\n", i); */
    
    printf("变量i的值为：%d\n", *p);
    change(p);
    printf("变量i的值为：%d\n", *p);
    return 0;
}


void change(const int * p){

    printf("参数指针p的值为：%d\n", *p);
    // *p = 200;

}