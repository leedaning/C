#include <stdio.h>

int fToc(){

    float F, C;     // F:�����¶�; C:�����¶�;

    printf("�����뻪���¶�\n");
    scanf("%f", &F);
    printf("����Ļ����¶�Ϊ��%f��\n", F);
    C = 5 * (F - 32) / 9;
    printf("ת��Ϊ�����¶�Ϊ��%0.2f��\n", C);

    return C;
}

int fToc2(){
    double f, c;

    scanf("%lf\n", &f);
    c = 5*(f-32)/9;
    printf("ת��Ϊ�����¶�2Ϊ��%0.2lf��\n", c);
    return c;
}

int main(void){

    // fToc();
    fToc2();
    return 0;
}