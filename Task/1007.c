#include <stdio.h>

int main(void)
{

    int x, y = 0;

    scanf("%d", &x);
    if (x<1)
    {
        y = x;
    }else if(x>=1 && x<10){
        y = 2 * x - 1;
    }else{
        y = 3 * x - 11;
    }
    printf("y�Ľ��Ϊ��%d", y);

    return 0;
}
