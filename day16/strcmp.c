#include <stdio.h>

int method_01(char st_01[], char st_02[]);
int myStrcmp(const char st_01[], const char st_02[]);
int myStrcmpPoint(const char * st_01, const char * st_02);

int main(int argc, char const * argv[]){

    char st_01[] = "abc";
    char st_02[] = "abcd";
    int res = method_01(st_01, st_02);
    int rest = myStrcmp(st_01, st_02);
    int result = myStrcmpPoint(st_01, st_02);

    // printf("字符串%s和%s比较的结果为：%d\n", st_01, st_02, strcmp(st_01, st_02));
    printf("字符串%s和%s比较的结果为：%d\n", st_01, st_02, res);
    printf("字符串%s和%s比较的结果为：%d\n", st_01, st_02, rest);
    printf("字符串%s和%s比较的结果为：%d\n", st_01, st_02, result);
    printf("字符d=%d \n", 'd');
    getchar();
    return 0;
}

int myStrcmpPoint(const char * st_01, const char * st_02){

    while (*st_01 != '\0' && *st_02 != '\0' && *st_01 == *st_02)
    {
        st_01++;
        st_02++;
    }
    
    return *st_01 - * st_02;
}

int myStrcmp(const char st_01[], const char st_02[]){

    int num = 0;
    while (st_01[num] != '\0' && st_02[num] != '\0' && st_01[num] == st_02[num])
    {
        num++;
    }
    
    return st_01[num] - st_02[num];
}

int method_01(char st_01[], char st_02[]){

    int res = 1;

    res = strcmp(st_01, st_02);

    return res;    
}
