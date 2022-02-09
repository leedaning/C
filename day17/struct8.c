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
struct point * getStruct2(struct point * p);
void print(const struct point * p);

void main(){

    struct point pt;
    scanf("%d %d", &pt.x, &pt.y);
    outStruct(pt);

    getStruct(&pt);
    outStruct(pt);

    outStruct(* getStruct2(&pt));       // 等价于getStruct(&pt);    outStruct(pt);
    print(getStruct2(&pt));

    *getStruct2(&pt) = (struct point){1, 2};
    outStruct(pt);
    print(&pt);
}

/**
 * @brief Get the Struct object
 * 指向结构体的指针
 * @param p 传递结构体指针，则函数中不会重新生成一个结构体类型的变量
 */
void getStruct(struct point * p){
    p->x = 20;
    p->y = 30;
}

/**
 * @brief Get the Struct2 object
 * 将函数体指针作为函数的返回值返回，这样有利于后面的其他的函数使用，如：outStruct(* getStruct2(&pt));
 * @param p 
 * @return struct point* 
 */
struct point * getStruct2(struct point * p){

    p->x = 200;
    p->y = 300;

    return p;
}

void outStruct(struct point p){

    printf("x为:%d, y为：%d\n", p.x, p.y);
}

/**
 * @brief 打印结构体内容
 * const表示不会对参数指针做任何修改
 * 
 * @param p 
 */
void print(const struct point * p){

    printf("Print struct x=%d, y=%d\n", p->x, p->y);
}