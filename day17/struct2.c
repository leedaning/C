#include <stdio.h>

// ���ṹ������ĳ�Ա������ֵ

struct person{
    char * name;
    int age;
    int height;
};

struct person  method_01(struct person p);
struct person method_02();


int main(void){

    struct person p;

    // p = method_01(p);
    p = method_02();

    printf("name is %s, age is %d, hegith is %dcm\n", p.name, p.age, p.height);

    return 0;
}

struct person method_02(){

    struct person p = {.name="Jim", .height=180};
    // printf("name is %s, age is %d\n", p.name, p.age);
    return p;
}

struct person  method_01(struct person p){

    p.name = "Tom";
    p.age = 18;

    // printf("name is %s, age is %d\n", p.name, p.age);
    return p;
}