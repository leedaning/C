#include <stdio.h>
#include <math.h>

double circleArea(double r){
    double pi, s;

    pi = acos(-1);
    s = pi * r *r;

    return s;
}

int main(void){
    double r, s;        // r:圆半径; s:圆面积;
    scanf("%lf\n", &r);
    s=circleArea(r);
    printf("面积的值为:%0.2lf", s);
    return 0;
}