#include <stdio.h>

void point(void);
void point_01(int *p);  // ������Ҫָ������
void show(int i);
void arrf(int arr[], int *p);

int main(void){

    int i = 10;
    int arr[3] = {11, 12, 13};
    int *p;
    p = &i;

    printf("i=%d, i��ַ��%#x\n", i, &i);
    printf("i=%d, p=%#x, *p=%#x\n", i, p, &p);
    // point();
    // point_01(&i);
    // show(i);

    printf("����arr��sizeofΪ��%lu��ָ��p��sizeonfΪ��%lu\n", sizeof(arr), sizeof(p));
    printf("arr�ĵ�ַΪ��%#x, arr[0]�ĵ�ַΪ��%#x, * arr�ĵ�ַΪ��%#x\n", arr, &arr[0], &arr);
    printf("�����һ��ֵΪ��%d\n", arr[0]);
    arrf(arr, p);
    printf("�����һ��ֵΪ��%d\n", arr[0]);
    printf("ָ�뵱������ʹ�ã���һ��ֵΪ��%d\n", p[0]);

    return 0;
}

// void arrf(int *arr, int *p){
void arrf(int arr[], int *p){

    printf("�����sizeofΪ��%lu�� [p]��sizeofΪ��%lu��arr�ĵ�ַΪ��%x\n", sizeof(arr), sizeof(p), arr);
    arr[0] = 12;
}

void show(int i){
    printf("i��ֵΪ��%d\n", i);
}

void point_01(int *p){

    printf("ָ���ַΪ��%#x�� ֵΪ��%d\n", p, *p);
    *p = 99;
}

void point(void){

    int i;          // ��ͨ�������ڴ�ռ��д�ŵı���ֵ
    int* p = &i;    // ��i���ڴ��ַ��ŵ�ָ��p���ڴ�ռ���
    // int* p, q;  // p��ָ�룬q��int���͵ı�������ָ��
    // int *p, q;  // p��ָ�룬q��int���͵ı�������ָ��
    // int *p, *q; // p��q����ָ�����͵ı���
    
}