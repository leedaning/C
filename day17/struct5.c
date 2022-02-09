#include <stdio.h>

struct point{
    int x;
    int y;
};

void getStruct(struct point p);
void outStruct(struct point p);


void main(){

    struct point p;
    scanf("%d %d", &p.x, &p.y);
    getStruct(p);
    outStruct(p);

}

/**
 * @brief Get the Struct object
 * 使用结构体作为参数，函数中会根据结构体参数重新生成一个结构体类型
 * @param p 
 */
void getStruct(struct point p){

    scanf("%d %d", &p.x, &p.y);
    printf("输入的x为:%d, 输入的y为：%d\n", p.x, p.y);
}

void outStruct(struct point p){

    printf("x为:%d, y为：%d\n", p.x, p.y);
}