#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int isEmpty = 1; // 用来判断是否有完数
    for (int i = 1; i <= n; ++i) {
        // i用来遍历所有小于等于n的自然数
        int total = 0; // 用来记录i的所有的约数的和
        for (int j = 1; j < i; ++j) {
            // j用来遍历所有比i小的自然数，把i的约数找出来
            if (i % j == 0) {
                total += j; // 如果j是i的约数，就把j加到total中
            }
        }
        if (total == i) { // 如果total等于i，说明i是一个完数
            isEmpty = 0; // 说明有完数
            printf("%d\n", i); // 输出完数
        }
    }
    if (isEmpty == 1) {
        printf("NO\n");
    }
    return 0;
}