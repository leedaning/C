#include <stdio.h>

void changeVals(int *p, int *q);

int main(void){

    int p=10, q=20;
    printf("p��ֵΪ��%d��q��ֵΪ��%d\n", p, q);
    changeVals(&p, &q);
    printf("p��ֵΪ��%d��q��ֵΪ��%d\n", p, q);
    return 0;
}

void changeVals(int *p, int *q){

    int temp = 0;
    temp = *p;
    *p = *q;
    *q = temp;
}