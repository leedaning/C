#include <stdio.h>

void change(const int * p);     //�����в�����ʾconst���͵�ָ�룬�ں����ڲ��������޸�ָ����ָ������ֵ

int main(void){

    int i = 100;
    const int * p;
    p = &i;

    /* printf("����i��ֵΪ��%d\n", i);
    change(&i);         // �ȿ���ʹ�ñ���i�ĵ�ַ&i��Ҳ����ʹ��ָ��p
    printf("����i��ֵΪ��%d\n", i); */
    
    printf("����i��ֵΪ��%d\n", *p);
    change(p);
    printf("����i��ֵΪ��%d\n", *p);
    return 0;
}


void change(const int * p){

    printf("����ָ��p��ֵΪ��%d\n", *p);
    // *p = 200;

}