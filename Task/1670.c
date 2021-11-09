#include <stdio.h>

int reverse(int num){       // 将数字逆向输出，如356， 输出653

    while (num != 0)
    {
        printf("%d ", num%10);
        num /= 10;
    }
    
    return 0;
}

int main(void){

    int num;

    scanf("%d", &num);
    reverse(num);

    return 0;
}
