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

    printf("请输入一个整数，判断是否是素数\n");
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
        printf("数字%d是素数\n", num);
    }else{
        printf("数字%d不是素数\n", num);
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

    res == 1 ? printf("数字%d是素数", num) : printf("数字%d不是素数", num);
    /* if (res == 1)
    {
        printf("数字%d是素数", num);
    }else{
        printf("数字%d不是素数", num);
    } */
    
}