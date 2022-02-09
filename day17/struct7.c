#include <stdio.h>
/**
 * @brief 
 * 指向结构体的指针 * 
 */
struct point{
    int x;
    int y;
};

void getStruct(struct point * p);
void outStruct(struct point p);

void main(){

    struct point pt;
    scanf("%d %d", &pt.x, &pt.y);
    outStruct(pt);
    
    struct point * p;
    p = &pt;
    p->x = 10;
    (*p).y = 20; // 等价于pt.y = 20;    
    printf("x：%d, y：%d\n", p->x, p->y);

    /* getStruct(&pt);
    printf("结构体变量p的地址为：%#x\n", &p);
    printf("x：%d, y：%d\n", pt.x, pt.y); */

}

/**
 * @brief Get the Struct object
 * 指向结构体的指针
 * @param p 传递结构体指针，则函数中不会重新生成一个结构体类型的变量
 */
void getStruct(struct point * p){
    p->x = 20;
    // return p;
}

void outStruct(struct point p){

    printf("x为:%d, y为：%d\n", p.x, p.y);
}