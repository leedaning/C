#include <stdio.h>

int main(void){

    float num;
    scanf("%*f %*f %f", &num);          // �˴�*��%��f�м䣬��ʾ������Ӧ�����룬��%*f %*f֮��Ŀո��ʾ���������Ҳ���Կո����֣�Ҳ���Ը��������Զ���ķָ������硰,��
    printf("��������Ϊ:%f\n", num);

    /* int num;
    printf("Please enter three number:\n");
    scanf("%*d %*d %d",&num);
    printf("The last number is %d\n",num);*/
    return 0;
}