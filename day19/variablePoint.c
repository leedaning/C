#include <stdio.h>
#include <stdlib.h>
/**
 * @brief 全局指针变量
 * 
 */


// int f(int *);

// int age = 18;
// int * gAll = &age;
char * gAll;

int main(int argc, char const * argv[]){
    // char name[] = "leen";
    // char * gAll = "leen";
    // gAll = (char *)malloc(sizeof(char)+1);
    /* printf("gAll len is %d\n", sizeof(gAll));
    gAll = "Lee"; */

    printf("In %s gAll = %s, add is %#x\n", __func__, gAll, &gAll);
    // f(gAll);
    // printf("In %s gAll = %d, add is %#x\n", __func__, *gAll, gAll);
    return 0;
}

/* int f(int * g){

    printf("In %s g = %d, add is %#x\n", __func__, *g, g);
    *g += 2;
    printf("In %s g = %d, add is %#x\n", __func__, *g, g);
    return *g;
} */
