#include <stdio.h>
int main() {
    /*
    printf("1234 = %d\n", 1234); //十进制
    printf("01234 = %d\n", 01234); //0开头的整形字面值是八进制的
    printf("0x1234 = %d\n", 0x1234); //0x开头的整型字面值是16进制的
    printf("0xABCDEF = %d\n", 0xABCDEF);
    */

    /*
    证明整数类型的数据范围
    int i = 0x7fffffff;
    // 0111 1111 1111 1111 1111 1111 1111 1111  -->最大正数
    i = i +1;
    printf("i = %d\n", i);
    */

    unsigned int u = 0xffffffff;
    u = u + 1;
    printf("u = %u\n", u);
    return 0;
}

