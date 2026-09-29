#include <stdio.h>
// 暂时先把函数的设计写在main函数的前面
// 返回值类型 函数名字 函数参数列表（形参）函数体
// void is_triangle(int a, int b, int c); // 函数声明
// void is_triangle(int a, int b, int c); // 声明可以是多次的
// int main() {
//     int a1 = 1, b1 = 2, c1 = 3;
//     int a2 = 2, b2 = 3, c2 = 4;
//     int a3 = 4, b3 = 5, c3 = 6;

//     // if (a1 + b1 > c1 && a2 + b2 > c2 && a3 + b3 > c3) {
//     //     printf("The triangle can be formed.\n");
//     // } else {
//     //     printf("The triangle cannot be formed.\n");
//     // }

//     is_triangle(a1, b1, c1);
//     is_triangle(a2, b2, c2);
//     is_triangle(a3, b3, c3);
//     return 0;
// }
// void is_triangle(int a, int b, int c) {
//     if (a + b > c && a + c > b && b + c > a) {
//         printf("The triangle can be formed.\n");
//     } else {
//         printf("The triangle cannot be formed.\n");
//     }
// }

void fun1() {

}
void fun2() {
    fun1();
}
int main() {
    fun1();
    fun2();
    return 0;
}