#include <stdio.h>

int func1(long num){
    long backnum, temp;       // ������5λ������
    int bnum;       // ���ֵ�λ��

    if (num >= 0 && num <= 99999)
    {
        while (num > 0)
        {
            bnum++;
            backnum = backnum * 10 + num % 10; 
            num /= 10;
        }
        printf("\nλ����%d\n", bnum);
        temp = backnum;
        while (temp > 0)
        {
            printf("%d ", temp % 10);
            temp /= 10;
        }        
        printf("\nbacknum:%ld\n", backnum);
    }else{
        printf("������һ����������λ������");
    }

    return 0;
}

int func2(long num){

    long backnum, temp;       // ������5λ������
    int bnum = 0;       // ���ֵ�λ��
    int ch[5];

    while (num > 0)
    {
        ch[bnum] = num % 10;
        num /= 10;
        bnum++;
    }
    printf("����λ��Ϊ��%d\n", bnum);

    for (int i = bnum - 1; i >= 0; i--)
    {
        printf("%d", ch[i]);
    }
    printf("\n");
    for (int i = 0; i < bnum; i++)
    {
        printf("%d ", ch[i]);
    }
    
    return 0;
}

int main(void)
{

    long num;       // ������5λ������

    scanf("%ld", &num);
    func2(num);

    return 0;
}