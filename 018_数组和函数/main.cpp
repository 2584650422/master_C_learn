#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
void func(int arr[LEN], int length) { //length补充的参数
    //在被调函数中，数组会退化成一个地址，丢失了长度信息
    printf("func sizeof(arr) = %d\n", sizeof(arr));
    for (int i =0; i < length; ++i) {
        printf("%3d", arr[i]);//[]运算符不需要长度信息
    }
    printf("\n"); 
}
int main() {
    // 在主调函数的位置，我们是知道数组的长度信息
    int arr[LEN] = { 1,2,3,4,5 };
    printf("main sizeof(arr) = %d\n", sizeof(arr));
    for (int i =0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        printf("%3d", arr[i]);
    }
    printf("\n");
    func(arr, sizeof(arr)/sizeof(int)); //数组这个整体作为实参时，不需要[]
    return 0;
}