#include <stdio.h>

// ʹ�ö̳�������������

void main(void){

    int m, n, max, min, least_common_multiple, greatest_common_divisor = 1;

    printf("�����������������ÿո���������ֱ�������������С�����������Լ��\n");

    scanf("%d %d", &m, &n);
    m>n ? (max = m, min = n) : (max = n, min = m);
    for (int i = 2; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            max /= i;
            min /= i;
            greatest_common_divisor *= i;
            i = 1;      //��i����Ϊ1 ��ѭ��ĩβ��i++��
        }
    }
    least_common_multiple = greatest_common_divisor * max * min;

    printf("\n���Լ��Ϊ��%d, ��С������Ϊ��%d", greatest_common_divisor, least_common_multiple );
    
}