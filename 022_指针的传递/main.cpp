#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("swap a = %d, b = %d\n", a, b);
// }

// int main() {
//     int a = 10, b = 5;
//     swap(a,b);
//     printf("main a = %d, b = %d\n", a, b);
//     return 0;
// }
void swap(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("swap *pa = %d, *pb = %d\n", *pa, *pb);
}
int main() {
    int a = 10, b = 5;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    swap(pa, pb);
    printf("main a = %d, b = %d\n", a, b);
}