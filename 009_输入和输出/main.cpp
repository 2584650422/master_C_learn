//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main () {
    //int i; //用来存放从stdin过来的数据
    //int ret = scanf("%d", &i);
    // %d是一个控制符，用来说将要接收的数据的类型是整数
    // &i 将数据存入i的地址之中， &符号取地址， 不可省略
    //printf("ret = %d, i = %d\n", ret, i);

    //char ch;
    //scanf("%c", &ch);
    //printf("ch = %c\n", ch);

    //int i;
    //char ch;
    //scanf("%d%c", &i, &ch);
    //printf("i = %d, ch = %c\n", i, ch);

    // int i;
    // char ch;
    // scanf("%d %c", &i, &ch);//%c前面空白，可以实现忽略很多很多个空白
    // printf("i = %d, ch = %c\n", i, ch);

    // char ch1, ch2;
    // ch1 = getchar();
    // ch2 = getchar();
    // printf("ch1 = %c, ch2 = %c\n", ch1, ch2);

    // char name[] = "caixukun"; //字符数组来存储字符串
    // int age = 30;
    // char addr[] = "USA";
    // char name1[] = "wuyifan";
    // int age1 = 33;
    // char addr1[] = "Canada";
    // printf("I am %-8s, I am %03d years old. I live in %s\n", name, age, addr);
    // printf("I am %-8s, I am %03d years old. I live in %s\n", name1, age1, addr1);

    // double f = 3.1415926535;
    // printf("f = %20.15lf\n", f); //最小宽度是20，其中小数点后面有15位

    char str[] = "hello";
    puts(str);
}