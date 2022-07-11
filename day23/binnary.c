/**
 * @file: binnary.c
 * @author: Leen
 * @brief: 二进制文件
 * @version: 0.1
 * @date: 2022-02-17 18:22:59
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

void study(void);
void wrt(void); // 写入文件
void read(void); // 读取文件

int main(int argv, char const * argc[]){

    // study();
    // wrt();
    read();
    return 0;
}

void read(void){


    FILE * fp = fopen("binnary.txt", "a");
    if (fp)
    {
        char cnt[50];

        fread(&cnt, sizeof(cnt), 1, fp);
        printf("Read file success.\n");
        printf("文件内容为：%i\n", cnt);
    }else{
        printf("Read file fail.\n");
    }
    
}

void wrt(void){

    char * cnt = "1";
    FILE * fp = fopen("binnary.txt", "a");
    if (fp)
    {
        fwrite(&cnt, sizeof(cnt), 1, fp );
        printf("Write file success.\n");
    }else{
        printf("Open file fail.\n");
    }
    
}

void study(void){
    
    char str[20];
    gets(str);
    /* char * str;
    gets(str); */
    printf("str is : %s\n", str);
}
