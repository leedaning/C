#include <stdio.h>
/**
 * @brief typedef �����������
 * �磺typedef long int li; ����long int���͵ı���Ϊli
 * 
 * @return int 
 */
typedef long int li;    // ����long int���͵ı���Ϊli
typedef long long int lli;      // ����long long int���͵ı���Ϊlli
typedef struct dates {
    int year;
    int month;
    int day;
} date;     // ����struct dates���͵ı���Ϊdate

typedef struct {
    char * name;
    int age;
} person;       // ����һ��û�����ֵĽṹ�� ���������Ϊperson����ע�����û��typedef�����Ƕ���һ��û�����ֵĽṹ������person��ӵ�����ֽṹ���͵ı�����


int main(void){

    li num = 10;
    lli count = 100;
    char * name = "leen";
    person per = {"leen", 28};

    printf("num��ֵΪ:%ld, sizeofΪ:%d\n", num, sizeof(num));
    printf("count��ֵΪ:%ld, sizeofΪ:%d\n", count, sizeof(count));

    
    printf("%s\n", name);

    printf("Person name is %s, age is %d.\n", per.name, per.age);
    return 0;
}