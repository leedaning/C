/**
 * @file: standardIn.c
 * @author: Leen
 * @brief: ��׼�ļ�����
 * @version: 0.1
 * @date: 2022-02-17 17:34:19
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main(int argv, char const * argc[]){

    char * str = "Hello world!";
    FILE * fp = fopen("file1.out", "ax");
    if(fp){
        // fscanf(fp, "%[^\n]", str);      // ��ȡ�ļ����ݸ�ֵ��str����
        fprintf(fp, "%s", str);             // ���ַ���str��ֵд�뵽file.out�ļ���ȥ
        printf("str is : %s", str);
        fclose(fp);
    }else{
        printf("else info\n");
    }
    return 0;
}
