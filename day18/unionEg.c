#include <stdio.h>


typedef union{
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, char const * argv[]){

    CHI chi;
    int i;
    char ch[sizeof(int)];
    ch = "Le";
    // chi.i = 1234;
    // chi.i = 9936;
    // chi.ch[sizeof(int)] = "Lee";
    /* for (int i = 0; i < sizeof(int); i++)
    {
        // printf("%02hhX", chi.ch[i]);
        printf("%02hX\n", chi.ch[i]);      // 以16进制打印每个字节的值，可用于int、char等字符中的单个字节的打印
        // 可以得到一个整数内部的各个字节，也可以得到double、char等内部的字节。用途，做文件操作，把一个整数以二进制形式写入到文件中时，可以作为读写的媒介
    }
    printf("\n"); */
    printf("%#x\n", chi);
    /* printf("%x\n", chi);
    printf("%p\n", chi); */

    printf("%s\n", ch);

    return 0;
}