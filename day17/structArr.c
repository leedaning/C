#include <stdio.h>
/**
 * @brief �ṹ����
 * 
 */

int main(){

    // ������ָ�븳ֵ�����⣬����ô���¶���
    int t = 200;
    int *p, q;
    q = 300;
    *p = &q;
    printf("t sizeof :%d,\tp sizeof:%d,\tq sizeof:%d\n", sizeof(t), sizeof(t), sizeof(t));
    printf("t is %d,\tp is %#x,\tq is %d.\n", t, p, q);

    // ������ָ�븳ֵ�Ϳ���
    /* int q = 100;
    int *p = &q; */

    // ��������ô�ҵ���Ӧ��ֵ�ģ�
}
