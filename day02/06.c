#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // char str[5] = {'L', 'e', 'e', 'n', '\0'};
    char str[5] = "Leen";
    int out_len;        // printf���صĽ������ʵ�Ǵ�ӡ���ַ��ĸ���
    out_len = printf("�ַ������:%s\n", str);

    printf("%d\n", out_len);

    /* int len = strlen(str);
    printf("�ַ�������:%d\n", len); */

    /* int i = 100, num = -2;
    float pi = acos(-1);
    char ch = 'A';

    printf("ʮ����:%d\n", i);
    printf("ʮ����:%i\n", i);
    printf("�˽���:%o\n", i);
    printf("������:%f\n", pi);
    printf("��ָ����ʽ�������˫����ʵ��:%e\n", pi);
    printf("��%f��%e�н϶������ȵ�һ�ָ�ʽ�������˫����ʵ��: %g\n", pi);
    printf("��������ַ�:%c\n", ch);
    printf("����ַ���:%s\n", str);
    printf("�趨��ȣ�%*d", 10, i); */

        /* printf("��ʮ������ʽ����޷�������:%u\n", i);
    printf("�˽���:%o\n", num);
    printf("ʮ������:%x\n", num); */

    return 0;
}