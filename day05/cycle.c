#include <stdio.h>

int num = 10;

int for_cycle(){

    printf("\nforѭ���ṹ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t %d", i);
    }
    
    return 0;
}

int while_do(){

    printf("\nwhile doѭ���ṹ");
    while (num)
    {
        printf("\t %d", num);
        num--;
    }
    
    return 0;
}


int do_while(){

    printf("\ndo whileѭ���ṹ");
    // int num = 10;
    do
    {
        printf("\t %d", num);
        num--;
    } while (num>=0);
    
    return 0;
}

int main(void){

    for_cycle();
    while_do();
    do_while();

    return 0;
}
