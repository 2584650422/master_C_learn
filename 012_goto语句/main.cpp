#include <stdio.h>
int main() {
    int i = 0;
    int total = 0;
label:
    total += i;
    ++i;
    if (i <= 100) {
        goto label;
    }
    printf("total = %d\n", total);
    return 0;
}