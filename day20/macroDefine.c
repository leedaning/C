#include <stdio.h>

// const double PI = 3.1415926;
#define PI 3.1415926   // ����һ������(����)PI��ֵΪ3.1415962
#define PI2 PI * 2      // ����һ����PI2��ֵΪPI * 2
#define FORMAT_F "%f"   // ����һ����FORMAT_F����ʽ�����float������
#define PRT printf("\nLeen\nPI = %f\n", PI); \
            printf("PI2 = %f\n", PI2)
#define _DEBUG  // �������������������ģ������������ı���Ԥ����ָ�������������Ƿ��Ѿ����������

int main(int argc, char const * argv[]){

    double circle_area;
    double r = 2.0;

    circle_area = PI * r * r;

    printf("Circel r = " FORMAT_F ", area = %f\n", r, circle_area);
    printf("PI2 = " FORMAT_F "\n", PI2);
    PRT;
    
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s, %s\n", __DATE__, __TIME__);
    getchar();
    return 0;
}