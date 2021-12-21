// 类型转换
#include <stdio.h>

void method_01(void);
void method_02(void);

int main(void){

    // method_01();
    method_02();

    return 0;
}


void method_02(void){
    double a = 4.0, b=2.0;
    int i;

    i = (int)a/b;       //将a转换为int然后再除b
    i = (int)(a/b);     //将a/b的结果转为int类型

    printf("结果为：%.2d\n", i);

}

void method_01(void){

    // char->short->int->long->long long

    char c;
    short t;
    int i, j;
    float f;
    double d;
    /* j = 32768;
    d = 18.99990011223; */

    i = 1;
    j = 1;
    while(i<=15){

        j *= 2; 
        i++;
    }
    printf("%d\n", j);

    printf("char sizeof:%d\n", sizeof(char));
    printf("short sizeof:%d\n", sizeof(short));
    printf("int sizeof:%d\n", sizeof(int));
    printf("long sizeof:%d\n", sizeof(long));

    printf("请输入整数、doubled的数\n");
    scanf("%d %lf", &j, &d);

    printf("输入的整数为：%d，输入的double数为：%.20lf\n", j, d);
    f = (float)d;
    i = (int)f;
    t = (short)j;
    c = (char)j;

    printf("浮点数：%.10f，整数：%d，short：%d，char:'%c' ，char:%d \n", f, i, t, c, c);
}

