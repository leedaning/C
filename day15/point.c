#include <stdio.h>

void method_01(void);
void method_02(void);
void method_03(void);
void method_04(void);
void method_05(int *p);

int main(void){

    // method_01();
    // method_02();
    // method_03();
    method_04();

    return 0;
}

void method_01(void){

    int i = 10;
    int p;

    // ����i��p���ڴ��ַ�ֱ�Ϊ0x61fdec��0x61fde8�����4���պ���int��һ��sizeof(int)���ȣ�4���ֽ�
    printf("����i��ֵΪ��%d�� �ڴ��ַΪ��%#x\n", i, &i);
    printf("����p��ֵΪ��%p�� �ڴ��ַΪ��%#x\n", p, &p);
}

void method_02(void){
    
    int i = 10;
    int *p;
    p = &i;

    printf("����i��ֵΪ��%d�� �ڴ��ַΪ��%x�� �ڴ��ַΪ��%#x�� �ڴ��ַΪ��%p\n", i, &i, &i, &i);
    printf("ָ��p��ֵΪ��%d�� �ڴ��ַΪ��%x�� �ڴ��ַΪ��%#x�� �ڴ��ַΪ��%p\n", *p, &p, &p, &p);
}

/**
 * @brief 
 * ��������
 * ����ĵ�ַΪ��0x61fdc0
 * ����ĵ�ַΪ��0x61fdc0
 * �����һ��Ԫ�صĵ�ַΪ��0x61fdc0
 * ����ڶ���Ԫ�صĵ�ַΪ��0x61fdc4
 */
void method_03(void){

    int arr[10];

    printf("����ĵ�ַΪ��%#x\n", &arr);
    printf("����ĵ�ַΪ��%#x\n", arr);
    printf("�����һ��Ԫ�صĵ�ַΪ��%#x\n", &arr[0]);
    printf("����ڶ���Ԫ�صĵ�ַΪ��%#x\n", &arr[1]);
}

void method_04(void){

    // ������ָ�븳ֵ�����⣬����ô���¶���
    /* int *p, q;
    q = 100;
    *p = (int)&q; */

    // ������ָ�븳ֵ�Ϳ���
    int q = 100;
    int *p = &q;

    printf("q�ĵ�ַΪ��%#x\n", &q);
    printf("p�ĵ�ַΪ��%#x, ֵΪ��%#x��ָ���ַΪ��%p\n", &p, p, p);       // ��ָ��ȡ��ַ���õ�����ָ��ĵ�ַ��ָ���ֵ������һ�������ĵ�ַ��
    /* ���Ϊ��
    p�ĵ�ַΪ��0x61fde0, ֵΪ��0x61fdec
    q�ĵ�ַΪ��0x61fdec */

    method_05(p);
    printf("q�ĵ�ַΪ��%#x, ֵΪ��%d\n", &q, q);
}

void method_05(int *p){
    printf("ָ�������ֵΪ��%#x�� ʮ����Ϊ��%d��ָ��ı�����ֵΪ��%d\n", p, p, *p);
    *p = 200;
}
