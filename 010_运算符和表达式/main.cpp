#include <stdio.h>
int main() {
    // int a = 10, b = 5;
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a %% b = %d\n", a % b); //printf显示%，所以得写%%

    // float a = 10, b = 3;
    // printf("a + b = %f\n", a + b);
    // printf("a - b = %f\n", a - b);
    // printf("a * b = %f\n", a * b);
    // printf("a / b = %f\n", a / b);
    // //printf("a %% b = %d\n", a % b); //取余运算符操作数必须是整数

    // int a = 1, b = 2, c = 3;
    // 优先级 * / % 高于 + -
    // 相同优先级按照从左到右的顺序 称为结合性
    // printf("output = %d", a + b * c);

    // int condition = 3;
    // // 0 假
    // // 1 -1 '0' 真
    // if (condition) {
    //     printf("True!\n");
    // }
    // else {
    //     printf("False!\n");
    // }

    // int a = 10, b = 5;
    // printf("a == b is %d\n", a == b);
    // printf("a != b is %d\n", a != b);

    /*
    int a = 1, b = 2, c = 3;
    printf("a < b < c is %d\n", a < b < c);
    // a < b < c 不是看b是否在a, c中间，而是先执行a<b,再执行b<c
    */

    // int a = 1, b = 2, c = 1;
    // printf("a == b < c is %d\n", a == b < c); //先做<  再==
    // printf("(a == b) < c is %d\n", (a == b) < c);

    // int year;
    // scanf("%d", &year);
    // if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    //     printf("%d is a leap year.", year);
    // }
    //     else {
    //         printf("%d is not a leap year.", year);
        // }

    // 短路
    // int i = 1;
    // int j = 1;
    // //i == j || (j = 2);
    // // i != j && printf("Hello World\n");
    // i == j && printf("Hello World\n");
    // printf("j = %d\n", j);

    // int i = 1; // 这个等于号不是赋值，它是初始化
    //i = 3 + 4; // 合理
    //i = i + 1; //合理 i出现左边表示访问其地址，i出现在右边表示获取值
    //i += 1; // 等价于 i = i + 1;
    // ++i; // 等价于 i = i + 1;
    // printf("i = %d\n", i);
    // int x, y;
    // x = y = 1;

    //三目运算
    // int a = 10, b = 15;
    // int max = a > b ? a : b;
    // printf("max = %d\n", max);

    // 三目运算符运算三个参数
    // int a = 10, b = 11, c = 1;
    // int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    // printf("max = %d\n", max);

    // 自增自减运算符
    int i = 3;
    int j;
    // j = ++i; //前缀自增，先++后返回
    j = i++; //后缀自增 先返回后++
    printf("i = %d, j = %d\n", i, j);
    return 0;
}