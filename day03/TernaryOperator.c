#include <stdio.h>

int main(void){

    int a, b, res;

    printf("请分别输入a和b的值，用空格分开\n");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);

    // char res[10];
    res = a > b ? a : b;
    printf("结果为：%d\n", res);

    int total = 0;
    while(res>0){
        printf("total的值为:%d\n", total);
        total += res;
        res--;
    }
    printf("%d的前n项和为:%d\n", res, total);

    return 0;
}