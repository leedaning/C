#include <stdio.h>
#include <math.h>

void method_01(void);
void method_02(void);
void method_03(void);

int main(void){

    // method_01();
    // method_02();
    method_03();
    return 0;
}

void method_03(void){
    int arr[] = {};

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%d值为：%d ", i, arr[i]);
    }
}

void method_02(void){

    int inp, num=0, max = 10;
    int arr[10] = {0};

    inp = 0;
    while (inp!=-1 && num<max)
    {
        scanf("%d", &inp);
        arr[inp]++;
        num++;
        // scanf("%d", &inp);
    }
    
    printf("\n");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d\t", arr[i]);
    }
    
}

void method_01(void){

    int len = 10;
    // int arr[] = {1, 2, 3};
    int arr[10] = {1};         // 第一个元素为1，其余九个元素为0

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d\t", arr[i]);
    }
    getchar();
}



