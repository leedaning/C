#include <stdio.h>

int main(void){

    int a, b, res;

    printf("��ֱ�����a��b��ֵ���ÿո�ֿ�\n");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);

    // char res[10];
    res = a > b ? a : b;
    printf("���Ϊ��%d\n", res);

    int total = 0;
    while(res>0){
        printf("total��ֵΪ:%d\n", total);
        total += res;
        res--;
    }
    printf("%d��ǰn���Ϊ:%d\n", res, total);

    return 0;
}