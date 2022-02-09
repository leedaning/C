#include <stdio.h>

// enum colors {RED, ORANGE, YELLOW, NumColors};
enum colors {RED=1, ORANGE, YELLOW=5};

void method_01(void);
void f(enum colors c);

int main(void){

    method_01();
    return 0;
}

void method_01(void){

    enum colors c = YELLOW;
    // scanf("%d", &c);
    f(c);
    printf("ORANGE number is :%d", ORANGE);
}

void f(enum colors c){

    printf("c:%d\n", c);
}