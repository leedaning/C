/**
 * @file: standardIn.c
 * @author: Leen
 * @brief: 标准文件输入
 * @version: 0.1
 * @date: 2022-02-17 17:34:19
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main(int argv, char const * argc[]){

    char * str = "Hello world!";
    FILE * fp = fopen("file1.out", "ax");
    if(fp){
        // fscanf(fp, "%[^\n]", str);      // 读取文件内容赋值给str变量
        fprintf(fp, "%s", str);             // 将字符串str的值写入到file.out文件中去
        printf("str is : %s", str);
        fclose(fp);
    }else{
        printf("else info\n");
    }
    return 0;
}
