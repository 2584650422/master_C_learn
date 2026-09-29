#include <stdio.h>
//使用宏定义来实现符号常量
//宏的作用是用在预处理阶段做文本替换
#define R (3+1)
#define PIE 3
int main () {
    //1234 = 1235;
    //3.14 = 3.14;
    //'a' = 'c';
    //"hello" = "world";

    //圆周率为3，半径也为3，求面积
    printf("R = %d, A = %d\n", R, PIE * R * R);
    return 0;
}

