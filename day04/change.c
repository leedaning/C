#include <stdio.h>

int main(void){

    float height_china;

    /* float height_foot, height_inch;    
    printf("��ֱ�������ʽ��ߣ�Ӣ�磩��Ӣ�ߺ�Ӣ��\n");
    scanf("%f %f", &height_foot, &height_inch);
    printf("��������Ϊ[%f]Ӣ�� [%f]Ӣ��\n", height_foot, height_inch);
    printf("���:%f", height_inch / 12); */


    int height_foot, height_inch;
    printf("��ֱ�������ʽ��ߣ�Ӣ�磩��Ӣ�ߺ�Ӣ��\n");
    scanf("%d %d", &height_foot, &height_inch);
    printf("��������Ϊ[%d]Ӣ�� [%d]Ӣ��\n", height_foot, height_inch);
    printf("���:%f", height_inch / 12.0);

    height_china = (height_foot + (height_inch / 12.0)) * 0.3048;
    printf("���%f��", height_china);

    return 0;
}
