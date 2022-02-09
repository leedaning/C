#include <stdio.h>

struct person{

    char * name;
    int age;
    char * brief;
};

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

    struct persion
    {
        char * name;
        int age;
    } p1, p2;

    
    p1.name = "Leen";
    p1.age = 28;
    p2.name = "John";
    p2.age = 29;
    printf("p1 name:%s, age:%d\n", p1.name, p1.age);
    printf("p2 name:%s, age:%d\n", p2.name, p2.age);

    struct person student;
    student.name = "Sam";
    student.age = 18;
    printf("student name:%s, age:%d\n", student.name, student.age);    
}

void method_02(void){

    struct {
        char * name;
        int age;
    } p1, p2;

    p1.name = "Leen";
    p1.age = 28;
    p2.name = "John";
    p2.age = 29;
    printf("p1 name:%s, age:%d\n", p1.name, p1.age);
    printf("p2 name:%s, age:%d\n", p2.name, p2.age);
}

void method_01(void){

    struct person china;
    china.name = "zhongguo";
    china.age = 100;
    china.brief = "This is brief.";

    printf("name is %s\n", china.name);
    printf("age is %d\n", china.age);
    printf("brief is %s\n", china.brief);
}