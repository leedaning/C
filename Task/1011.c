#include <stdio.h>

// ʹ��ָ�룬ʵ�ֺ������ض������

int method_01(int min, int max, int *least_common_multiple, int *greatest_common_divisor){
    
    for (int i = min; i > 0; i--)
    {
        if ((max % i == 0) && (min % i == 0))
        {
            *greatest_common_divisor = i;
            break;
        }
    }

    for (int j = max; j <= max * min; j++)
    {
        if ((j % max == 0) && (j % min == 0))
        {
            *least_common_multiple = j;
            break;
        }
        
    }
}

int main(void){

    int m, n, min, max, least_common_multiple, greatest_common_divisor;

    printf("\n�����������������ÿո���������ֱ�������������С�����������Լ��\n");
    scanf("%d %d", &m, &n);
    printf("\n������������ֱ�Ϊ:%d %d", m, n);

    m>n ? (max = m, min = n) : (max = n, min = m);
    printf("\nm = %d, n = %d", m, n);

    method_01(min, max, &least_common_multiple, &greatest_common_divisor);
    printf("\n���Լ��Ϊ��%d, ��С������Ϊ��%d", greatest_common_divisor, least_common_multiple );

    return 0;
}