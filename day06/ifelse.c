#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int age;
    double salary;

    printf("��������������\n");
    // scanf("%d", &age);
    age = 100;
    if (age > 65)
    {
        salary = age * 1.5;
        printf("��ÿ�¿���ȡ�����Ͻ�Ϊ��%f", salary);
    }

    system("pause");
    return 0;
}