#include <stdio.h>
/**
 * @brief ȫ�ֱ���
 * û������ʼ����ȫ�ֱ�����õ�0ֵ��ָ���õ�NULLֵ
 * ֻ���ñ���ʱ����֪��ֵ����ʼ��ȫ�ֱ������磺1��int gAll = f(); 2��int gAll = 12; int gTwo = gAll;�����ֶ��ǲ��еģ�
 * ���ǵĳ�ʼ��������main����֮ǰ
 * ��������ڲ�������ȫ�ֱ���ͬ���ı�������ȫ�ֱ����ᱻ����
 * 
 * @return int 
 */

int f(void);

int gAll = 12;
// int gAll ;       // ȫ�ֱ���������ֵ���ᱻ������Ĭ�ϸ�Ϊ0

int main(int argc, char const * argv[]){

    printf("in %s gAll = %d\n", __func__, gAll);
    f();
    printf("agn in %s gAll = %d\n", __func__, gAll);
    return 0;
}

int f(void){

    printf("in %s gAll = %d\n", __func__, gAll);
    gAll = 2;
    printf("agn in %s gAll = %d\n", __func__, gAll);
    return gAll;
}