// bool类型

#include <stdio.h>
#include <stdbool.h>

void method_01(void);


int main(void){

    method_01();
    return 0;
}

void method_01(void){

    // bool b = 6>5;
    bool b = false;

    if (b)
    {
        printf("条件成立");
    }else{
        printf("条件不成立");
    }
    
}