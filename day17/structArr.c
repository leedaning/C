#include <stdio.h>
/**
 * @brief 结构数组
 * 
 */

int main(){

    // 这样给指针赋值有问题，是怎么回事儿？
    int t = 200;
    int *p, q;
    q = 300;
    *p = &q;
    printf("t sizeof :%d,\tp sizeof:%d,\tq sizeof:%d\n", sizeof(t), sizeof(t), sizeof(t));
    printf("t is %d,\tp is %#x,\tq is %d.\n", t, p, q);

    // 这样给指针赋值就可以
    /* int q = 100;
    int *p = &q; */

    // 变量是怎么找到对应的值的？
}
