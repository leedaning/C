#include <stdio.h>

// ����� &

void and(void);
void getAddress(void);

int main(void){

    // and();
    getAddress();
    return 0;
}

void getAddress(void){

    int arr[5] = {1};

    printf("�����ַΪ��%#x\n", &arr);
    printf("�����ַΪ��%#x\n", arr);
    printf("�����ַΪ��%#x\n", &arr[0]);
    printf("�����ַΪ��%#x\n", &arr[1]);
}

void and(void){

    int i = 1;
    int p;
    p = (int)&i;

    printf("i��ֵΪ��%d��i�ĵ�ַΪ��ox%x����%p\n����%p\n", i, &i, &i);
    printf("i��ֵΪ��%d, Hexadecimal :%x, Hexadecimal:%#x\n", i, &i, &i);
    printf("i��ֵΪ��%d, Octal :%o, Octal:%#o\n", i, &i, &i);

    printf("p��ֵΪ��%#x\n", p);

    printf("int sizeof:%lu, i sizeof:%lu", sizeof(int), sizeof((int)&i));
}