#include <stdio.h>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

// if (system("CLS")) system("clear");

struct data{
    int max;
    int min;
};

// 比较两个数的大小
struct data compareTwo();
struct data compareThree();

int main(void){

    struct data res;

    res = compareTwo();
    printf("最大的数字为:%d, 最小的数字为:%d\n", res.max, res.min);

    res = compareThree();
    printf("最大的数字为:%d, 最小的数字为:%d\n", res.max, res.min);

    system("pause");

    return 0;
}

// 比较两个数的大小
struct data compareTwo(){
    int m, n;
    struct data temp;

    printf("请分别输入两个数字比较大小\n");
    scanf("%d %d", &m, &n);
    printf("输入的两个数字分别为：%d %d\n", m, n);

    temp.max = m;
    temp.min = n;
    if (n > temp.max)
    {
        temp.max = n;
        temp.min = m;
    }

    return temp;    
}

struct data compareThree(){

    int a, b, c;
    struct data temp;

    printf("请输入三个数字，找出最大数字和最小数字\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("输入的数字分别为：%d %d %d", a, b, c);

    temp.max = temp.min = a;
    if (temp.max < b)
    {
        temp.max = b;
    }else{
        temp.min = b;
    }

    if (temp.max < c)
    {
        temp.max = c;
    }

    if (temp.min > c)
    {
        temp.min = c;
    }
    
    return temp;    
}