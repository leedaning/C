#include <stdio.h>

void method_01(void);

int main(int argc, char const * argv[]){

    method_01();

    return 0;
}

void method_01(){
    int ch;

    while((ch = getchar()) != EOF){
        putchar(ch);
    }

    printf("\nEOF");
}
