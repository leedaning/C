#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

void study();
void method_01();
void method_02();
void study_02();

int main(void){

    // study();
    // method_01();
    // method_02();
    study_02();
    return 0;
}

void method_01(){
    int letter, number, blank, others;
    char ch;
    letter = number = blank = others = 0;
    printf("letter=%d, number=%d, blank=%d, others=%d\n", letter, number, blank, others);
    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            letter++;
        }else if(ch >= '0' && ch <= '9'){
            number++;
        }else if (ch == ' ')
        {
            blank++;
        }else{
            others++;
        }        
    }    
    printf("letter=%d, number=%d, blank=%d, others=%d\n", letter, number, blank, others);
}

void method_02(){
    int letter, number, blank, others;
    char ch;
    letter = number = blank = others;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            letter++;
        }else if(isdigit(ch)){
            number++;
        }else if(ch == ' '){
            blank++;
        }else{
            others++;
        }
    }

    printf("letter=%d, number=%d, blank=%d, others=%d\n", letter, number, blank, others);
}

void study(){
    
    char str[10], inp[20];
    int m, n;

    printf("�������ַ�\n");
    /* scanf("%s", str);
    // gets(str);
    // scanf("%[^\n]", &str);

    printf("������ַ���Ϊ��%s\n", str);
    m = sizeof(str);
    n = strlen(str);
    printf("str�ĳ���Ϊ��%d\n", m);
    printf("str�ĳ���Ϊ��%d\n", n);*/

    while(gets(inp)!=NULL){
        // getchar();
        printf("%s\n", inp);
        printf("-----�ָ���-----\n");
    }
}

void study_02(){
    char str[20];
    while (scanf("%[^\n]", str))
    {
        getchar();
        printf("%s\n", str);
        printf("-----�ָ���-----\n");
    }
    printf("�����ַ���Ϊ��%s\n", str);
}