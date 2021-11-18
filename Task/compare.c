#include <stdio.h>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

// if (system("CLS")) system("clear");

struct data{
    int max;
    int min;
};

// �Ƚ��������Ĵ�С
struct data compareTwo();
struct data compareThree();

int main(void){

    struct data res;

    res = compareTwo();
    printf("��������Ϊ:%d, ��С������Ϊ:%d\n", res.max, res.min);

    res = compareThree();
    printf("��������Ϊ:%d, ��С������Ϊ:%d\n", res.max, res.min);

    system("pause");

    return 0;
}

// �Ƚ��������Ĵ�С
struct data compareTwo(){
    int m, n;
    struct data temp;

    printf("��ֱ������������ֱȽϴ�С\n");
    scanf("%d %d", &m, &n);
    printf("������������ֱַ�Ϊ��%d %d\n", m, n);

    temp.max = m;
    temp.min = n;
    if (n > temp.max)
    {
        temp.max = n;
        temp.min = m;
    }

    return temp;    
}

struct data compareThree(){

    int a, b, c;
    struct data temp;

    printf("�������������֣��ҳ�������ֺ���С����\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("��������ֱַ�Ϊ��%d %d %d", a, b, c);

    temp.max = temp.min = a;
    if (temp.max < b)
    {
        temp.max = b;
    }else{
        temp.min = b;
    }

    if (temp.max < c)
    {
        temp.max = c;
    }

    if (temp.min > c)
    {
        temp.min = c;
    }
    
    return temp;    
}