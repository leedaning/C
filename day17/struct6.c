#include <stdio.h>

/**
 * @brief 
 * 封装结构体的输入、输出
 * 函数返回为结构体类型
 */
struct point{
    int x;
    int y;
};

struct point getStruct(void);
void outStruct(struct point p);


void main(){

    struct point p;
    scanf("%d %d", &p.x, &p.y);
    outStruct(p);

    p = getStruct();
    outStruct(p);

}

struct point getStruct(){

    struct point p;
    scanf("%d %d", &p.x, &p.y);
    printf("输入的x为:%d, 输入的y为：%d\n", p.x, p.y);
    return p;
}

void outStruct(struct point p){

    printf("x为:%d, y为：%d\n", p.x, p.y);
}