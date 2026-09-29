#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int isPrime = 1;
    //for (int i = 2; i < n; ++i) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("Y\n");
    } else {
        printf("N\n");
    }
    return 0;
}