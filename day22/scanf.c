/**
 * @file: scanf.c
 * @author: Leen
 * @brief: ????
 * @version: 0.1
 * @date: 2022-02-17 11:36:08
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main(int argv, char const * argc[]){

    int num;
    char * ch;
    printf("???num??:\n");
    scanf("%d", &num);

    printf("???ch??:\n");
    scanf("%c", &ch);

    printf("num is %d\n", num);
    printf("ch is %c\n", ch);
    getchar();
    return 0;
}
