#include <stdio.h>

void method_01(void);
void method_02(void);

int main(void)
{
    // method_01();
    method_02();
}

void method_01(void){
    
    int num, temp, i = 2, res = 1;

    printf("������һ���������ж��Ƿ�������\n");
    scanf("%d", &num);

    temp = num;
    while (temp / i >= i)
    {
        if (temp % i == 0)
        {
            res=0;
            break;
        }else{
            i++;
        }        
    }
    printf("res:%d\n", res);

    if (res==1)
    {
        printf("����%d������\n", num);
    }else{
        printf("����%d��������\n", num);
    }
}

void method_02(void){

    int num, temp, i=2, res=1;

    scanf("%d", &num);
    temp = num;
    while (temp / i >= i)
    {
        if (temp % i == 0)
        {
            res=0;
            break;
        }
        i++;
    }

    res == 1 ? printf("����%d������", num) : printf("����%d��������", num);
    /* if (res == 1)
    {
        printf("����%d������", num);
    }else{
        printf("����%d��������", num);
    } */
    
}