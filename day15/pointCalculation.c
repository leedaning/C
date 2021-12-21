#include <stdio.h>

void add(void);


int main(void){

    add();
    return 0;
}

void add(void){

    char arr[] = {0, 1, 2, 3, 4, 5};
    char * p = arr;
    /* char * p;
    p = arr; */
    /* printf("p = %#x\n", p);
    printf("p = %#x\n", p+1);
    printf("p = %d\n", *(p+1));
    printf("arr[3] = %d, arr+3 = %d\n", arr[3], *(arr+3));
    printf("*(p+3) = %d, p[3] = %d\n", *(p+3), p[3] ); */
    
    /* printf("\n");
    int arrs[] = {0, 10, 20, 30, 40, 50};
    int * q = arrs;
    int * p = &arrs[5];
    printf("q = %#x\n", q);
    printf("q = %#x\n", q+1);
    printf("q = %d\n", *(q+1));
    printf("p - q = %d\n", p - q); */

    /* int adds = *(int *)0x61fdc0;
    printf("int地址加一的值为：%#x\n", &adds); */

    /* int adds = 0x61fdb4;
    printf("int地址加一的值为：%#x\n", *(int *)adds); */
    

}

