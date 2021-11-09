#include <stdio.h>

int main(void){

    char c1, c2, c3, c4, c5;

    printf("ÇëÊäÈëChina×Ö·û´®\n");
    scanf("%c%c%c%c%c\n", &c1, &c2, &c3, &c4, &c5);

    // printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
    c1 += 4;
    c2 += 4;
    c3 += 4;
    c4 += 4;
    c5 += 4;
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
    return 0;
}