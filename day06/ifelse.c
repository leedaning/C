#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int age;
    double salary;

    printf("请输入您的年龄\n");
    // scanf("%d", &age);
    age = 100;
    if (age > 65)
    {
        salary = age * 1.5;
        printf("您每月可领取的养老金为：%f", salary);
    }

    system("pause");
    return 0;
}