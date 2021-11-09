#include <stdio.h>

int study(){
    int num, temp, front;
    scanf("%d", &num);
    temp = num;
    while(num>0){
        front = num / 2;
        if (num % 2 != 0)
        {
            num--;
            continue;
        }
        
        for (int i = 0; i < front; i++)
        {
            printf(" ");
        }
        
        for (int i = 0; i < temp - num + 1; i++)
        {
            printf("*");
            if (i==temp - num)
            {
                printf("\n");
            }
        }
        
        /* for (int i = num; i > 0; i--)
        {
            printf("*");
            if (i==1)
            {
                printf("\n");
            }
        } */
        num--;
    }

    return 0;
}

int main(void){

    printf("This is while control statement.\n");
    study();    
    /* int num;
    scanf("%d", &num);
    printf("num:%d", num); */
    return 0;
}