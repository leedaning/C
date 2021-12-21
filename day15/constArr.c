#include <stdio.h>

void twoPoint(void);

int main(void){

    twoPoint();
    return 0;
}

void twoPoint(void){


    int i = 100, j = 200;
    // int const * p = &i;
    const int * p = &i;
    int *q = &j;

    printf("p=%d, q=%d\n", *p, *q );

    // p = q;
    *p = j;
    printf("p=%d, q=%d\n", *p, *q );

}
