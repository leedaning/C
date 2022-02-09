#include <stdio.h>
/**
 * @brief typedef 给类型起别名
 * 如：typedef long int li; 定义long int类型的别名为li
 * 
 * @return int 
 */
typedef long int li;    // 定义long int类型的别名为li
typedef long long int lli;      // 定义long long int类型的别名为lli
typedef struct dates {
    int year;
    int month;
    int day;
} date;     // 定义struct dates类型的别名为date

typedef struct {
    char * name;
    int age;
} person;       // 定义一个没有名字的结构， 设置其别名为person；（注：如果没有typedef，则是定义一个没有名字的结构，并且person是拥有这种结构类型的变量）


int main(void){

    li num = 10;
    lli count = 100;
    char * name = "leen";
    person per = {"leen", 28};

    printf("num的值为:%ld, sizeof为:%d\n", num, sizeof(num));
    printf("count的值为:%ld, sizeof为:%d\n", count, sizeof(count));

    
    printf("%s\n", name);

    printf("Person name is %s, age is %d.\n", per.name, per.age);
    return 0;
}