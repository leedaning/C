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

    printf("\n����%d�ĳ���Ϊ%d.", numi, sizei);
    printf("\n����%f�ĳ���Ϊ%d.", numf, sizef);
    printf("\n����%lf�ĳ���Ϊ%d.", numd, sized);
    printf("\n�ַ���%s�ĳ���Ϊ%d.", str, sizes);
    printf("\n�ַ���%s�ĳ���Ϊ%d.", str, str_size);

    return 0;
}