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

// �����ַ�
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

    printf("ת������ַ�Ϊ��%c\n", d-i);
    printf("ת������ַ�Ϊ��%c\n", c+i);




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

    printf("�������ַ�a\n");
    scanf("%c", &a);            // �磺1

    printf("����a=%d\n", a);        // �����49
    printf("�ַ�a='%c'\n", a);      // �����'1'


    printf("����������i\n");    // ��49
    scanf("%d", &i);
    b = i;    
    printf("����b=%d,\t�ַ�b='%c'", b, b);      // �������b=49,       �ַ�b='1'

}

void method_05(void){

    char a, b;
    a = 1;
    b = '1';

    printf("a= %d,\t b=%c\n", a, b);
    printf("b= %d,\t b=%c", b, b);
}

// ������
void method_04(void){

    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = a / b;

    printf("%lf/%lf=%.20lf", a, b, c);
}

void method_03(void){

    float a, b, c, d, precision;

    a = 1.345f;     // ��С�������������double����float,float��Ҫ��f��F��׺���������
    b = 1.123f;
    precision = 1e-5;           // ���ȣ�С�������Χ��Ϊ����ȣ��������
    c = a + b;
    d = fabs(c - 2.468);
    if (c == 2.468)
    {
        printf("�����Ԥ�����\n");
    }else{
        printf("�����Ԥ�ڲ����, c = %.10f �� %f\n", c, c);
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

    // printf("%d\n", 12/0);        // ���벻ͨ�����������ܳ���0�����������������ʾ�����ǿ����ø�������ʾ
}

void method_01(void){

    float num = 123456.123456789;
    float e_num = 1e-10;
    // double e_num = 1e-10;
    double two_num = 0.0049;
    double three_num = 0.00049;

    printf("��������%f\t", num);
    printf("��������%e\n", num);
    printf("e_num = %.10f\n", e_num);

    printf("%.3f %.30f %.3f", two_num, two_num, three_num);


}
