#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap: a = %d, b = %d\n", a, b);
}

int main() {
    int a = 10, b = 5;
    swap(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}