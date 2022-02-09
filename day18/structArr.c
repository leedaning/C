#include <stdio.h>

/**
 * @brief 结构类型的数组
 * 
 * @return int 
 */

// 日期结构体date
struct date
{
    int year;
    int month;
    int day;
};

void method_01(void);
void method_02(void);

int main(void){

    method_01();
    method_02();
    return 0;
}

void method_02(void){

    printf("\n\n");
    /* int arr[2];
    arr[0] = 1;
    arr[1] = 2;
    printf("arr 1 = %d\n", arr[1]); */

    // 一、声明的时候初始化赋值
    // struct date dt = {2023, 02, 01}; 

    // 二、无序赋值
    /* struct date dt;
    dt.year = 2023;
    dt.month = 06;
    dt.day = 30; */

    // 三、无序赋值
    /* struct date dt = {2022, .month = 3, 10}; 
    printf("\n dt : %d-%d-%d\n", dt.year, dt.month, dt.day); */

    /* struct date dateArr[2];
    dateArr[0] = {2023, 01, 01};
    dateArr[1] = {2023, 02, 01};  */ 

    struct date dateArr[2];
    dateArr[0] = (struct date){2023, 01, 01};
    dateArr[1] = (struct date){2023, 02, 01};  

    // struct date dateArr[2] = {{2023, 01, 01}, {2023, 02, 01}};
    /* struct date dateArr[2];
    dateArr[0].year = 2024;
    dateArr[0].month = 07;
    dateArr[0].day = 01; */

    int num = 0;
    int len = sizeof(dateArr) / sizeof(dateArr[0]);
    while (num < len)
    {
        printf("第二部分：%d-%d-%d\n", dateArr[num].year, dateArr[num].month, dateArr[num].day);
        num++;
    }
    
}

void method_01(void){

    // 声明一个date结构体元素类型的数组dtArr
    struct date dtArr[] = {{2022, 01, 01}, {2022, 11, 31}}; 

    printf("日期结构体数组dtArr\n");
    int len = sizeof(dtArr) / sizeof(dtArr[0]);
    int num = 0;
    printf("数组长度：%d\n", len);
    while (num<len)
    {
        printf("%d-%d-%d\n", dtArr[num].year, dtArr[num].month, dtArr[num].day);
        num++;
    }

}