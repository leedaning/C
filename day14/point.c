#include <stdio.h>

// ָ��

void method_01(void);
void method_02(void);
void method_03(void);

int main(void){

    // method_01();
    // method_02();
    method_03();
    return 0;
}

/**
 * @brief 
 * ����ָ�����
 */
void method_03(void){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* int *p, *q;
    p = arr[0];
    q = arr[5];*/
    int *p = &arr[0];
    int *q = &arr[5]; 

    printf("p=%d,\t q=%d,\t *p = %d,\t *q = %d,\t q-p=%d, \t *q - *q=%d\n", p, q, *p, *q, q-p, *q-*p);
}


void method_02(void){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *p = arr;
    int *p;
    p = arr;

    printf("ָ������Ϊ��%d, ��ַΪ��%#x\n", *p, p);
    printf("ָ���һ������Ϊ��%d, ��ַΪ��%#x\n", *(p+1), (p+1));
}

void method_01(void){

    char arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // char *p = arr;

    char *p;
    p = arr;

    /* char ch = 'A';
    char *p;
    p = &ch; */
    // printf("�ַ�ch������Ϊ��%c, ��ַΪ��%#x\n", ch, ch);

    printf("ָ������Ϊ��%d, ��ַΪ��%#x\n", *p, p);
    printf("ָ���һ������Ϊ��%d, ��ַΪ��%#x\n", *(p+3), (p+1));
}