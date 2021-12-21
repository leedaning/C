#include <stdio.h>

// 运算符 &

void and(void);
void getAddress(void);

int main(void){

    // and();
    getAddress();
    return 0;
}

void getAddress(void){

    int arr[5] = {1};

    printf("数组地址为：%#x\n", &arr);
    printf("数组地址为：%#x\n", arr);
    printf("数组地址为：%#x\n", &arr[0]);
    printf("数组地址为：%#x\n", &arr[1]);
}

void and(void){

    int i = 1;
    int p;
    p = (int)&i;

    printf("i的值为：%d，i的地址为：ox%x，或：%p\n，或：%p\n", i, &i, &i);
    printf("i的值为：%d, Hexadecimal :%x, Hexadecimal:%#x\n", i, &i, &i);
    printf("i的值为：%d, Octal :%o, Octal:%#o\n", i, &i, &i);

    printf("p的值为：%#x\n", p);

    printf("int sizeof:%lu, i sizeof:%lu", sizeof(int), sizeof((int)&i));
}