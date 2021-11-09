#include <stdio.h>

int main(void){

    int score;

    scanf("%d", &score);
    if (score >= 0 && score <= 100)
    {
        if (score < 60)
        {
            printf("E");
        }else if(score >= 60 && score <= 69){
            printf("D");
        }else if(score >= 70 && score <= 79){
            printf("C");
        }else if(score >= 80 && score <= 89){
            printf("B");
        }else if(score >= 90 && score <= 100){
            printf("A");
        }                
    }else{
        printf("输入的数值范围不正确");
    }
    
    return 0;
}