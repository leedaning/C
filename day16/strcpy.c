#include <stdio.h>
#include <string.h>

void myStrcpy(char * restrict dst, const char * restrict src);
void myStrcpyArr(char * restrict dst, const char * restrict src);

int main(void){

    char * src = "Hello leen";
    char * dst = (char *)malloc(sizeof(src) + 1);
    char * mydst = (char *)malloc(strlen(src) + 1);

    strcpy(dst, src);
    printf("源字符串src为：%s, 长度为：%d, sizeof:%d\n", src, strlen(src), sizeof(src));
    printf("目标字符串dst为：%s, 长度为：%d, sizeof:%d\n", dst, strlen(dst), sizeof(dst));
    myStrcpy(mydst, src);
    printf("目标字符串mydst为：%s, 长度为：%d, sizeof:%d\n", mydst, strlen(mydst), sizeof(mydst));
    /* myStrcpyArr(mydst, src);
    printf("目标字符串mydst为：%s, 长度为：%d, sizeof:%d\n", mydst, strlen(mydst), sizeof(mydst)); */

    return 0;
}

void myStrcpyArr(char * restrict dst, const char * restrict src){

    int idx = 0;
    while(src[idx] != '\0'){
        dst[idx] = src[idx];
        idx++;
    }
    // dst[idx] = src[idx];
    dst[idx] = '\0';
}

void myStrcpy(char * restrict dst, const char * restrict src){

    char * ret = dst;
    /* while (* src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    } */
    /* while (* src != '\0')
    {
        *dst++ = *src++;
    } */
    /* while (* src)
    {
        *dst++ = *src++;
    } */
    while (*dst++ = *src++)
    ;
    // * dst = *src;
    * dst = '\0';
    return ret;
}

