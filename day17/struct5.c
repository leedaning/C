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
 * ʹ�ýṹ����Ϊ�����������л���ݽṹ�������������һ���ṹ������
 * @param p 
 */
void getStruct(struct point p){

    scanf("%d %d", &p.x, &p.y);
    printf("�����xΪ:%d, �����yΪ��%d\n", p.x, p.y);
}

void outStruct(struct point p){

    printf("xΪ:%d, yΪ��%d\n", p.x, p.y);
}