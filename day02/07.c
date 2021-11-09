#include <stdio.h>

int main(void){

    float num;
    scanf("%*f %*f %f", &num);          // 此处*在%和f中间，表示跳过相应的输入，且%*f %*f之间的空格表示输入的内容也是以空格区分，也可以更换其他自定义的分隔符，如“,”
    printf("输入数据为:%f\n", num);

    /* int num;
    printf("Please enter three number:\n");
    scanf("%*d %*d %d",&num);
    printf("The last number is %d\n",num);*/
    return 0;
}