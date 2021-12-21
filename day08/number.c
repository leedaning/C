#include <stdio.h>
#include <math.h>

void method_01(void);
void method_02(void);
void method_03(void);
void method_04(void);
void method_05(void);
void method_06(void);
void method_07(void);
void method_08(void);
void method_09(void);

int main(void){

    // method_01();
    // method_02();
    // method_03();
    // method_04();
    // method_05();
    // method_06();
    // method_07();
    // method_08();
    method_09();

    return 0;
}

// 逃逸字符
void method_09(void){

    printf("123\b456\n789\t012");

}

void method_08(void){

    char c = 'A', d='a';
    int i;

    printf("c is %c\n", c);
    /* c+=2;
    printf("c is %c\n", c); */

    i = 'a' - 'A';
    printf("res is %d\n", i);

    printf("转换后的字符为：%c\n", d-i);
    printf("转换后的字符为：%c\n", c+i);




}

void method_07(void){

    int i, j;
    char c;

    // scanf("%d %c", &i, &c);
    scanf("%d%c", &i, &c);

    printf("i=%d, c='%c', c=%d", i, c, c);
    
    /* scanf("%d%d", &i, &j);
    printf("i=%d, c=%d", i, j); */
}

void method_06(void){
    char a, b;
    int i;

    printf("请输入字符a\n");
    scanf("%c", &a);            // 如：1

    printf("数字a=%d\n", a);        // 输出：49
    printf("字符a='%c'\n", a);      // 输出：'1'


    printf("请输入数字i\n");    // 如49
    scanf("%d", &i);
    b = i;    
    printf("数字b=%d,\t字符b='%c'", b, b);      // 输出数字b=49,       字符b='1'

}

void method_05(void){

    char a, b;
    a = 1;
    b = '1';

    printf("a= %d,\t b=%c\n", a, b);
    printf("b= %d,\t b=%c", b, b);
}

// 计算金额
void method_04(void){

    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = a / b;

    printf("%lf/%lf=%.20lf", a, b, c);
}

void method_03(void){

    float a, b, c, d, precision;

    a = 1.345f;     // 带小数点的字面量是double而非float,float需要用f或F后缀来表明身份
    b = 1.123f;
    precision = 1e-5;           // 精度，小于这个范围认为是相等，否则不相等
    c = a + b;
    d = fabs(c - 2.468);
    if (c == 2.468)
    {
        printf("结果与预期相符\n");
    }else{
        printf("结果与预期不相符, c = %.10f 或 %f\n", c, c);
    }

    printf("%.5f\n", precision);
    printf("d=%.10f\n", d);
    if (d<precision)
    {
        printf("a+b=%.10f\n", c);
    }else{
        printf("a+b!=%f\n", c);
    }    

}

void method_02(void){

    printf("%f\n", 12.0/0.0);
    printf("%f\n", -12.0/0.0);
    printf("%f\n", 0/0.0);

    // printf("%d\n", 12/0);        // 编译不通过，整数不能除以0，无穷大不能用整数表示，但是可以用浮点数表示
}

void method_01(void){

    float num = 123456.123456789;
    float e_num = 1e-10;
    // double e_num = 1e-10;
    double two_num = 0.0049;
    double three_num = 0.00049;

    printf("输出结果：%f\t", num);
    printf("输出结果：%e\n", num);
    printf("e_num = %.10f\n", e_num);

    printf("%.3f %.30f %.3f", two_num, two_num, three_num);


}
