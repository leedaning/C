#include <stdio.h>

int fToc(){

    float F, C;     // F:华氏温度; C:摄氏温度;

    printf("请输入华氏温度\n");
    scanf("%f", &F);
    printf("输入的华氏温度为：%f℃\n", F);
    C = 5 * (F - 32) / 9;
    printf("转换为摄氏温度为：%0.2f℃\n", C);

    return C;
}

int fToc2(){
    double f, c;

    scanf("%lf\n", &f);
    c = 5*(f-32)/9;
    printf("转换为摄氏温度2为：%0.2lf℃\n", c);
    return c;
}

int main(void){

    // fToc();
    fToc2();
    return 0;
}