#include <stdio.h>

// 二维数组

void two_dimensional_array(void);

int main(void){

    two_dimensional_array();
    return 0;
}

// 二维数组
void two_dimensional_array(void){

    int arr[][2] = {{1, 18}, {2, 16}, {3, 16},};    // 二维数组的第一维可以为空，但是第二维不能为空 


    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("\n");
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
        {
            if (j%2==0)
            {
                printf("编号：%d，", arr[i][j]);
            }else{
                printf("年龄：%d", arr[i][j]);
            }
            
        }
        
    }
    

}