#include <stdio.h>
int main () {
    /*
    float f = 3.14159;
    printf("f = %.10f\n", f);
    double d = 3.14159;
    printf("d = %.10f\n", d);
    */

    //float a = 1.2345e10; //e10代表*10^10
    //float b = a + 20;
    double a = 12345e10;
    double b = a + 20;
    printf("a = %f, b = %f\n", a, b);
    return 0;
}