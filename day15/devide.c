#include <stdio.h>

int devide(int a, int b, int *res);

int main(void){

    int a, b, res, resu;
    int *p = 10;
    *p = 12;
    printf("*p = %d", *p);
    /* scanf("%d %d", &a, &b);

    resu = devide(a, b, &res);
    printf("res:%d, resu:%d", res, resu); */
    return 0;
}

int devide(int a, int b, int *res){

    int result = 0;
    if (b == 0)
    {
        result = -1;
    }else{
        *res = a / b;
    }
    
    return result;
}