#include <stdio.h>

/**
 * @brief 
 * ��װ�ṹ������롢���
 * ��������Ϊ�ṹ������
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
    printf("�����xΪ:%d, �����yΪ��%d\n", p.x, p.y);
    return p;
}

void outStruct(struct point p){

    printf("xΪ:%d, yΪ��%d\n", p.x, p.y);
}