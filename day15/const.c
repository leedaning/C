#include <stdio.h>

void study(void);
void study02(void);

int main(void){

    // study();
    study02();
    return 0;
}

void study02(void){

    int i = 100, j = 200;
    // int * const p = &i;     // const在*的后面、指针p的前面。指针不可修改，如：p++、p--、p = &j等操作都不可以，但是可以通过*p修改指针所指变量值（如：*p = 300;）

    /* int i = 100, j = 200;
    const int * p = &i;     // const在int的前面（只要在p的前面，在int前面、int后面和*前面都一样），表明int是const的。指针指的变量值不可用*p改变（如*p = 300;），但可以通过直接修改变量的值来修改变量的值（如：i = 300;）。 */
    int const * p = &i;     // const在int的前面（只要在p的前面，在int前面、int后面和*前面都一样），表明int是const的。指针指的变量值不可用*p改变（如*p = 300;），但可以通过直接修改变量的值来修改变量的值（如：i = 300;）。

    // int j = 200;
    /* int const i = 100;      // const的变量，值不可以通过修改变量而改变（如：i = 300;），但是可以通过指针修改（如：*p = 300; ）。
    int * p = &i; */
    
    /* const int i = 100;      // const的变量，值不可以通过修改变量而改变（如：i = 300;），但是可以通过指针修改（如：*p = 300; ）。
    int * p = &i; */

    printf("变量i=%d, 内存地址为:%#x\n", i, &i);
    printf("变量j=%d, 内存地址为:%#x\n", j, &j);
    printf("指针p的值为：%#x, 内存地址为：%#x, 所指变量的值为：%d\n", p, &p, *p);

    // p = &j;
    // i = 300;
    *p = 300; 
    // i = j;
    // p--;   
    printf("指针p的值为：%#x, 内存地址为：%#x, 所指变量的值为：%d\n", p, &p, *p);

}

void study(void){
    
    int * p, i = 100;   // 声明一个int类型的指针p和一个int类型的变量i
    p = &i;

    printf("变量i=%d\n", i);
    printf("指针p=%d, 地址为：%#x, 或：%p", *p, p, p);
}