#include <stdio.h>

// ��ά����

void two_dimensional_array(void);

int main(void){

    two_dimensional_array();
    return 0;
}

// ��ά����
void two_dimensional_array(void){

    int arr[][2] = {{1, 18}, {2, 16}, {3, 16},};    // ��ά����ĵ�һά����Ϊ�գ����ǵڶ�ά����Ϊ�� 


    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("\n");
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
        {
            if (j%2==0)
            {
                printf("��ţ�%d��", arr[i][j]);
            }else{
                printf("���䣺%d", arr[i][j]);
            }
            
        }
        
    }
    

}