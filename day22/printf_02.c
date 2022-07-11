/**
 * @file: printf_02.c
 * @author: Leen
 * @brief: 
 * @version: 0.1
 * @date: 2022-02-17 10:45:36
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

void firVar(void);
void secVar(void);

int main(int argv, char const * argc[]){

    // firVar();
    // secVar();
    int c;
    printf("geeks for %ngeeks ", &c);
    printf("%d", c);
    getchar();
    
    return 0;
}

void secVar(void){

    int num;
    printf("%d%n", 12345, &num);
    printf("\n%d\n", num);
}

void firVar(void){

    char ch = 'A';
    int len = 10;
    int num = 1024;
    int temperature = -10;
    char arr[] = "This is array.";
    int * p;
    p = &num;
    unsigned int maxNum = 0;
    maxNum--;
    float f = 3.1415926;

    printf("×Ö·ûch is %c\n", ch);
    printf("num is %d\n", num);
    printf("temperature is %d\n", temperature);
    printf("arr is %s\n", arr);
    printf("p is %d, address is %#x\n", *p, p);
    printf("maxNum is %u\n", maxNum);

    printf("% d\n", num);
    printf("%+0*d\n", len, temperature);
    printf("%+010.3f\n", f);

}