#include <stdio.h>

// շת�����
int main(void){

    int a, b, remainder;

    printf("�������������������Լ��\n");
    scanf("%d %d", &a, &b);
    while (b!=0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("���Լ��Ϊ��%d", a);
    return 0;
}