#include <stdio.h>
/**
 * @brief 
 * ָ��ṹ���ָ�� * 
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

    outStruct(* getStruct2(&pt));       // �ȼ���getStruct(&pt);    outStruct(pt);
    print(getStruct2(&pt));

    *getStruct2(&pt) = (struct point){1, 2};
    outStruct(pt);
    print(&pt);
}

/**
 * @brief Get the Struct object
 * ָ��ṹ���ָ��
 * @param p ���ݽṹ��ָ�룬�����в�����������һ���ṹ�����͵ı���
 */
void getStruct(struct point * p){
    p->x = 20;
    p->y = 30;
}

/**
 * @brief Get the Struct2 object
 * ��������ָ����Ϊ�����ķ���ֵ���أ����������ں���������ĺ���ʹ�ã��磺outStruct(* getStruct2(&pt));
 * @param p 
 * @return struct point* 
 */
struct point * getStruct2(struct point * p){

    p->x = 200;
    p->y = 300;

    return p;
}

void outStruct(struct point p){

    printf("xΪ:%d, yΪ��%d\n", p.x, p.y);
}

/**
 * @brief ��ӡ�ṹ������
 * const��ʾ����Բ���ָ�����κ��޸�
 * 
 * @param p 
 */
void print(const struct point * p){

    printf("Print struct x=%d, y=%d\n", p->x, p->y);
}