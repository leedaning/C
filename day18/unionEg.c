#include <stdio.h>


typedef union{
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, char const * argv[]){

    CHI chi;
    int i;
    char ch[sizeof(int)];
    ch = "Le";
    // chi.i = 1234;
    // chi.i = 9936;
    // chi.ch[sizeof(int)] = "Lee";
    /* for (int i = 0; i < sizeof(int); i++)
    {
        // printf("%02hhX", chi.ch[i]);
        printf("%02hX\n", chi.ch[i]);      // ��16���ƴ�ӡÿ���ֽڵ�ֵ��������int��char���ַ��еĵ����ֽڵĴ�ӡ
        // ���Եõ�һ�������ڲ��ĸ����ֽڣ�Ҳ���Եõ�double��char���ڲ����ֽڡ���;�����ļ���������һ�������Զ�������ʽд�뵽�ļ���ʱ��������Ϊ��д��ý��
    }
    printf("\n"); */
    printf("%#x\n", chi);
    /* printf("%x\n", chi);
    printf("%p\n", chi); */

    printf("%s\n", ch);

    return 0;
}