#include <stdio.h>
int main () {
    /*
    // 数据类型 变量名字
    int i;
    printf("sizeof(i) = %d\n", sizeof(i));
    double d1,d2; //定义两个变量d1和d2
    printf("sizeof(d1) = %d, sizeof(d2) = %d, sizeof(double) = %d\n",
        sizeof(d1),sizeof(d2),sizeof(double));
    // 数据类型会决定内存大小
    */

    // 初始化的代码
    int i = 3; // 定义一个变量i然后设置初值3
    i = 4; // 用4来取代i原来的内容
    i = i + 1; // 先计算i+1，再赋值
    printf("i = %d\n", i);
    return 0;
}