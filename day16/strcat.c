#include <stdio.h>

void myStrcat(char * restrict dst, const char * restrict src);

/**
 * @brief ×Ö·û´®Á¬½Ó
 * 
 * @return int 
 */
int main(void){

    /* char * src = "leen";
    char * dst = "Hello"; */
    char src[] = " leen";
    char dst[] = "Hello";

    printf("src = %s\n", src);
    printf("dst = %s\n", dst);
    
    myStrcat(dst, src);
    // strcat(dst, src);
    printf("dst = %s\n", dst);

    return 0;
}

void myStrcat(char * restrict dst, const char * restrict src){

    // char * rst = dst;

    while (*dst)
    {
        dst++;
    }
    while (*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    
    // return rst;
}