#include <stdio.h>
int main() {
    //单分支if
    // int i;
    // scanf("%d", &i);
    // if (i == 1) {
    //     printf("i is 1\n");
    //     printf("i is 1\n");
    // } // 编程要求，自己写的代码，不能省略花括号

    // 两个分支的if
    // int a = 10, b = 5;
    // if (a > b) {
    //     printf("max = a , a is %d\n", a);
    // }
    // else {
    //     printf("max = b, b is %d\n", b);
    // }

    // 三个分支的if
    // int a = 30, b = 25, c = 20;
    // if (a > b) {
    //     if (a > c) {
    //         printf("max = a, a is %d\n", a);
    //     }else {
    //         printf("max = c, c is %d\n", c);
    //     }
    // }else {
    //     if (b > c) {
    //         printf("max = b, b is %d\n", b);
    //     }
    //     else {
    //         printf("max = c, c is %d\n", c);
    //     }
    // }

    // 更多分支的if
    // int height;
    // scanf("%d", &height);
    // if (height < 160) {
    //     printf("He is short!");
    // }
    // else if (height <= 185) {
    //     printf("He is middle-sized!");
    // }
    // else {
    //     printf("He is tall!");
    // }

    // if-else不加花括号的另一个问题
    // int i = 0;
    // if (i > 1)
    //     if (i < 10)
    //         printf("i is between 1 and 10\n");
    // else
    //     printf("i is not between 1 and 10\n");

    // switch+break
    // int i = 3;
    // switch (i) {
    //     case 1:
    //         printf("1\n");
    //         break;
    //     case 2:
    //         printf("2\n");
    //         break;
    //     case 3:
    //         printf("3\n");
    //         break;
    //     default:
    //         printf("default\n");
    //         break;
    // }

    // 场景题
    int year, month;
    scanf("%d %d", &year, &month);
    int dom;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dom = 31;
            printf("dom = %d\n", dom);
            break;
        case 4: case 6: case 9: case 11:
            dom = 30;
            printf("dom = %d\n", dom);
            break;
        case 2:
            dom = 28 + (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
            printf("dom = %d\n", dom);
            break;
        default:
            printf("error!\n");
    }
    return 0;
}