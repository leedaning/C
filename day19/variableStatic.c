#include <stdio.h>

/**
 * @brief ��̬���ر���
 * 
 */

int gAll = 2;

int f(void);

int main(int argc, char const * argv[]){

    f();
    return 0;
}

int f(void){

    static int sAll = 12;
    int i = 22;
    printf("Func is f, global variable gAll add is %#x\n", &gAll);      // �ڴ��ַ��С
    printf("Func is f&static local variable sAll add is %#x\n", &sAll); // �ڴ��ַ��С
    printf("Func is f, loc&al variable i add is %#x\n", &i);            // �ڴ��ַ�ܴ�
    return 0;
}