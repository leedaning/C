// 运算符
#include <stdio.h>

struct nums{
    int little;
    int big;
};

void method_01(void);
void method_02(void);       // 逗号运算符
int sum(int a, int b);      // 求a-b质检所有数相加之和
struct nums checkNum(int a, int b);     // 检验两个数，按大小返回

int main(void){
    

    int begin, end, total;
    scanf("%d %d", &begin, &end);

    // method_01();
    method_02();
    total = sum(begin, end);
    printf("total = %d\n", total);

    return 0;
}

struct nums checkNum(int a, int b){
    struct nums res;

    a > b ? (res.big = a, res.little = b) : (res.big = b, res.little = a) ;
    return res;
}

int sum(int a, int b){

    struct nums num;
    int total = 0;

    num = checkNum(a, b);


    for (int i = num.little; i <= num.big; i++)
    {
        total += i;
    }
    
    return total;
}

// 逗号表达式，主要在for中使用
void method_02(void){

    int i;

    // i = 3+4, 5+6;       // result:7
    i = (3+4, 5+6);       // result:11

    printf("i=%d\n", i);

    for (int i = 0, j=10; i < 10, j<20; i++, j++)
    {
        printf("i=%d,\tj=%d,\tres=%d\n", i, j, i*j);
    }
    
}

void method_01(void){

    int a;

    scanf("%d", &a);
    if (++a > 2)
    {
        printf("大于\n");
    }else{
        printf("不大于\n");
    }
}

