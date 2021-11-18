#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

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

    printf("请输入字符\n");
    /* scanf("%s", str);
    // gets(str);
    // scanf("%[^\n]", &str);

    printf("输入的字符串为：%s\n", str);
    m = sizeof(str);
    n = strlen(str);
    printf("str的长度为：%d\n", m);
    printf("str的长度为：%d\n", n);*/

    while(gets(inp)!=NULL){
        // getchar();
        printf("%s\n", inp);
        printf("-----分割线-----\n");
    }
}

void study_02(){
    char str[20];
    while (scanf("%[^\n]", str))
    {
        getchar();
        printf("%s\n", str);
        printf("-----分割线-----\n");
    }
    printf("最终字符串为：%s\n", str);
}