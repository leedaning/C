#include <stdio.h>

#include <string.h>

int main(void){

    int number[10] = {0}, len, cnt=0, sum=0, ipt=0;
    double avg = 0;
    len = sizeof(number) / sizeof(number[0]);       //�ַ�����

    printf("�����ֽڳ���Ϊ:%d\n", sizeof(number));        //�ֽ���
    printf("�����ַ�����Ϊ:%d\n", sizeof(number) / sizeof(number[0]));        //�ַ�����

    printf("������һϵ�����֣����������ƽ��ֵ������\n");
    
    scanf("%d", &ipt);
    while (cnt<len && ipt != -1)
    {
        number[cnt] = ipt;
        sum += ipt;
        cnt++;
        scanf("%d", &ipt);
    }
    
    printf("��������ָ���Ϊ��%d", cnt);
    printf("��������ֵ��ܺ�Ϊ��%d", sum);

    avg = sum / (cnt + 1.0);
    printf("ƽ����Ϊ��%d", avg);

    /* while (cnt<len)
    {
        if (number[cnt]>avg)
        {
            printf("%d\t", number[cnt]);
        }
    } */

    return 0;
}