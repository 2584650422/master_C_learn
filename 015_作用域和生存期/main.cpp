#include <stdio.h>

// 作用域
// int a = 1;
// void func() {
//     int b = 2;
// }
// int main() {
//     int c = 3;
//     {
//         int d = 4;
//         int a = 2;
//         a = 3;
//         // a b c d --> 除了b
//         d = 1;
//     }
//     // a b c d --> 除了b和d,其他都是有效的
//     return 0;
// }

// 生存期
int a = 1; // 全局变量,生存期为整个程序运行期间
void func() {
    int a = 2; // 局部变量,生存期为函数调用期间
}
int main() {
    int a = 3; // 局部变量,生存期为函数调用期间
    func();
    return 0;
}