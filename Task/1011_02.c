#include <stdio.h>

// ʹ�ýṹ�壬ʵ�ַ������ض������

struct data
{
    int least_common_multiple;  // ��С������
    int greatest_common_divisor; //���Լ��
};

struct data method_01(int min, int max);

int main(void){

    int m, n, min, max;
    struct data res;

    printf("\n�����������������ÿո���������ֱ�������������С�����������Լ��\n");
    scanf("%d %d", &m, &n);
    printf("\n������������ֱ�Ϊ:%d %d", m, n);

    m>n ? (max = m, min = n) : (max = n, min = m);
    printf("\nm = %d, n = %d", m, n);

    res = method_01(min, max);
    printf("\n���Լ��Ϊ��%d, ��С������Ϊ��%d", res.greatest_common_divisor, res.least_common_multiple );

    return 0;
}

struct data method_01(int min, int max){

    struct data res;

    for (int i = min; i > 0; i--)
    {
        if ((max % i == 0) && (min % i == 0))
        {
            res.greatest_common_divisor = i;
            break;
        }
    }

    for (int j = max; j <= max * min; j++)
    {
        if ((j % max == 0) && (j % min == 0))
        {
            res.least_common_multiple = j;
            break;
        }
        
    }
    return res;
}