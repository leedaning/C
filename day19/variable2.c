#include <stdio.h>

int f(void);

int gAll = 12;

int main(int argc, char const * argv[]){

    printf("In function %s gTwo = %d\n", __func__, gAll);
    f();
    printf("In function %s gTwo = %d\n", __func__, gAll);
    return 0;
}

int f(void){
    int gAll = 2;
    printf("In function %s gAll = %d\n", __func__, gAll);
    return gAll;
}
