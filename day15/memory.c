#include <stdio.h>
#include <stdlib.h>

// ��̬�����ڴ�

int main(void){

    // int arr[] = (int *) malloc();
    int number;
    printf("������������");
    scanf("%d\n", &number);

    // int arr[number];
    /* int * arr;
    arr = (int *)malloc(number * sizeof(int)); */

    int arr[3] = {11, 22, 23};
    int * p = &arr;
    printf("\n%d\n", *p);

    /* for (int i = 0; i < number; i++)
    {
        scanf("%d", &arr[i]);
    } */
    
    for (int i = number - 1; i >= 0; i--)
    {
        printf("%d\t", *(p+i));
    } 
    // free(arr);

    return 0;
}