#include <stdio.h>

// �����������ȿ��Ա��������ֵ�ƽ�����������û�ҵ��ܹ���������������Ϊ����
/* �ж�һ�����Ƿ�������
1����ǰ������2����Сһ�룬100�Ļ�ֻҪ��50���ɣ�
2����ǰ����ƽ�����������ţ�100�Ļ�ֻҪ��10���ɣ�
3����ǰ��ǰ�棨��С�ڵ�ǰ�����������������磺����7��1��2��3��5�����ܳ�Ϊ���ĳ����� */

int judge_01(int num);
int judge_02(int num);
int judge_03(int num);

int prime[25] = {0};

int main(void){

    int max_num, is_prime, count=0;
    printf("������һ�����֣����������С�ڸ����ֵ�����\n");
    scanf("%d", &max_num);

    for (int i = 2; i <= max_num; i++)
    {
        is_prime = judge_03(i);
        if (is_prime)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n��������Ϊ��%d", count);
    
    return 0;
}

int judge_03(int num){

    int is_prime = 1;
    for (int i = 0; i < sizeof(prime)/sizeof(prime[0]); i++)
    {
        if (num % prime[i] == 0)
        {
            is_prime = 0;
            break;
        }        
    }
    return is_prime;
}

int judge_02(int num){

    int is_prime = 1;
    for (int i = 2; i <= num/i; i++)
    {
        {

            int temp = num/i;
        }
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}

int judge_01(int num){

    int is_prime = 1;
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}
