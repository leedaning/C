#include <stdio.h>

int main(void){

    float height_china;

    /* float height_foot, height_inch;    
    printf("请分别输入美式身高（英寸）的英尺和英寸\n");
    scanf("%f %f", &height_foot, &height_inch);
    printf("输入的身高为[%f]英尺 [%f]英寸\n", height_foot, height_inch);
    printf("结果:%f", height_inch / 12); */


    int height_foot, height_inch;
    printf("请分别输入美式身高（英寸）的英尺和英寸\n");
    scanf("%d %d", &height_foot, &height_inch);
    printf("输入的身高为[%d]英尺 [%d]英寸\n", height_foot, height_inch);
    printf("结果:%f", height_inch / 12.0);

    height_china = (height_foot + (height_inch / 12.0)) * 0.3048;
    printf("身高%f米", height_china);

    return 0;
}
