#include <stdio.h>

// struct list;

void main(void){

    int n = 10;
    int list[n];

    while (scanf("%d", &list)!=NULL)
    {
        n++;
        getchar();
        printf("ÖµÎª£º%d", list);
    }
    

}