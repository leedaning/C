#include <stdio.h>
#include <math.h>

double circleArea(double r){
    double pi, s;

    pi = acos(-1);
    s = pi * r *r;

    return s;
}

int main(void){
    double r, s;        // r:Բ�뾶; s:Բ���;
    scanf("%lf\n", &r);
    s=circleArea(r);
    printf("�����ֵΪ:%0.2lf", s);
    return 0;
}