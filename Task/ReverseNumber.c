#include <stdio.h>
#include <stdlib.h>

void reverse(int number);   // ���ֵ������
void reverse2(int number, int digit_length);   // ���ֵ��������ָ��������ȣ�����ǰ���0
void positive(int number);  // ��������ÿλ����ո����
int digitLength(int number);    // �������ֳ��ȣ�λ����

int main(void){

    int number;

    printf("������һ������\n");
    scanf("%d", &number);
    // reverse(number);
    positive(number);
    system("pause");
}

// ��������ÿλ����ո����
void positive(int number){
    int reverse_number = 0, digit_length;

    digit_length = digitLength(number);
    printf("���ֳ���Ϊ��%d\n", digit_length);

    while(number>0){
        reverse_number = reverse_number * 10 + number % 10;
        number /= 10;
    }
    printf("����֮�������Ϊ��%d\n", reverse_number);
    reverse2(reverse_number, digit_length);
}

// �������ֳ��ȣ�λ����
int digitLength(int number){

    int lenght = 0;
    while (number>0)
    {
        number = number / 10;
        lenght++;
    }
    return lenght;
}

// ���ֵ������
void reverse(int number){
    
    int signle_num, temp_num;
    temp_num = number;
    
    /* do{
        signle_num = number % 10;
        printf("%d \t", signle_num);
        number /= 10;
    }while (number > 0); */

    while (number>0)
    {
        signle_num = number % 10;
        printf("%d ", signle_num);
        number /= 10;
    }    
}

// ���ֵ������
void reverse2(int number, int digit_length){
    
    int signle_num;
    while (digit_length>0)
    {
        signle_num = number % 10;
        printf("%d", signle_num);
        number /= 10;
        if (digit_length>1)
        {
            printf(" ");
        } 
        digit_length--;        
    }    
}
