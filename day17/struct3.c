#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

void method_01(void);

int main(void){

    method_01();

    return 0;
}

void method_01(void){

    struct date today = {2022, 01, 18};

    struct date yesterday;
    yesterday = today;
    yesterday.day = 17;

    struct date * pDate = &today;

    printf("Today is %d-%d-%d.\n", today.year, today.month, today.day);
    printf("Yesterday is %d-%d-%d.\n", yesterday.year, yesterday.month, yesterday.day);

    printf("Today address is %#x.\n", &today);
    printf("Yesterday address is %#x.\n", &yesterday);

    printf("pDate address is %#x.\n", pDate);

}
