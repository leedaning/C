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

void main(){

    struct point pt;
    scanf("%d %d", &pt.x, &pt.y);
    outStruct(pt);
    
    struct point * p;
    p = &pt;
    p->x = 10;
    (*p).y = 20; // �ȼ���pt.y = 20;    
    printf("x��%d, y��%d\n", p->x, p->y);

    /* getStruct(&pt);
    printf("�ṹ�����p�ĵ�ַΪ��%#x\n", &p);
    printf("x��%d, y��%d\n", pt.x, pt.y); */

}

/**
 * @brief Get the Struct object
 * ָ��ṹ���ָ��
 * @param p ���ݽṹ��ָ�룬�����в�����������һ���ṹ�����͵ı���
 */
void getStruct(struct point * p){
    p->x = 20;
    // return p;
}

void outStruct(struct point p){

    printf("xΪ:%d, yΪ��%d\n", p.x, p.y);
}