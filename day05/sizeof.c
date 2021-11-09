#include <stdio.h>
#include <string.h>

int main(void){

    int sizei, sizef, sized, sizes, numi = 1024;
    float numf = 1024.00;
    double numd = 1024.00;
    char str[30] = "abcdefghijklmnopqrstuvwxyz";
    // string str = "abcdefghijklmnopqrstuvwxyz";

    sizei = sizeof(numi);
    sizef = sizeof(numf);
    sized = sizeof(numd);
    sizes = sizeof(str);
    int str_size = strlen(str);

    printf("\n数字%d的长度为%d.", numi, sizei);
    printf("\n数字%f的长度为%d.", numf, sizef);
    printf("\n数字%lf的长度为%d.", numd, sized);
    printf("\n字符串%s的长度为%d.", str, sizes);
    printf("\n字符串%s的长度为%d.", str, str_size);

    return 0;
}