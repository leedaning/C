#include <stdio.h>

// ���100���ڵ�����

void getRangePrime(void);
short judgePrime(int num);
void getNumPrime();

int main(void){

    getRangePrime();
    getNumPrime();

}

// ��ȡָ������������
void getNumPrime(){

    int i = 1, count = 0, num;
    short is_prime;

    printf("��������Ҫ����������\n");
    scanf("%d", &num);
    printf("�����%d���������£�\n");
    while (count<num)
    {
        is_prime = judgePrime(i);
        if (is_prime==1)
        {
            count++;
            printf("%d\t ", i);
            if (count % 5 == 0)
            {
                printf("\n");
            }
            
        }        
        i++;
    }    
}

// ��ĳ����Χ�ڵ�����
void getRangePrime(void){

    int range_num;
    short prime_num;
    printf("������һ�����֣���ȷ��������Χ\n");
    scanf("%d", &range_num);

    /* while (range_num>0)
    {
        prime_num = judgePrime(range_num);
        if (prime_num==1)
        {
            printf("����%d������\n", range_num);
        }else{
            printf("����%d��������\n", range_num);
        }
        range_num--;
    } */

    printf("%d���ڵ������У�\n", range_num);
    for (int i = 1; i <= range_num; i++)
    {

        prime_num = judgePrime(i);
        if (prime_num==1)
        {
            printf("%d ", i);
        }
    }
}

// �ж�һ�����Ƿ�������
short judgePrime(int num){
    int i = 2;
    short is_prime = 1;

    while (num / i >= i)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
        i++;
    }
    
    return is_prime;
}
