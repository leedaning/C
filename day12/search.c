#include <stdio.h>

int search(int key, int arr[], int len);

int main(void){

    int arr[] = {11, [1]=3, 22, 33, 44, 55, 66, 77, 88, 99, 0};
    int subscript, ser;

    // arr2 = arr;     // 此处错误，数组变量不能被数组变量直接赋值，只能通过遍历或者声明时赋值
    {
        for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("请输入要查找的数字\n");
    scanf("%d", &ser);
    subscript = search(ser, arr, sizeof(arr)/sizeof(arr[0]));
    printf("被查找的数字下标为：%d\n", subscript);
    return 0;
}

int search(int key, int arr[], int len){

    int subscript = -1;

    for (int i = 0; i < len; i++)
    {
        if (arr[i]==key)
        {
            subscript = i;
            break;
        }
    }
    
    return subscript;
}