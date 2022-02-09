#include <stdio.h>

// const double PI = 3.1415926;
#define PI 3.1415926   // 定义一个符号(即宏)PI，值为3.1415962
#define PI2 PI * 2      // 定义一个宏PI2，值为PI * 2
#define FORMAT_F "%f"   // 定义一个宏FORMAT_F，格式化输出float的数据
#define PRT printf("\nLeen\nPI = %f\n", PI); \
            printf("PI2 = %f\n", PI2)
#define _DEBUG  // 这类宏是用于条件编译的，后面有其他的编译预处理指令来检查这个宏是否已经被定义过了

int main(int argc, char const * argv[]){

    double circle_area;
    double r = 2.0;

    circle_area = PI * r * r;

    printf("Circel r = " FORMAT_F ", area = %f\n", r, circle_area);
    printf("PI2 = " FORMAT_F "\n", PI2);
    PRT;
    
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s, %s\n", __DATE__, __TIME__);
    getchar();
    return 0;
}