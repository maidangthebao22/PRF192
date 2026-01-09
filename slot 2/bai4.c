#include <stdio.h>

int main() {
    float a = 5.0f;
    float b = 10.216f;
    float kq = a + b;

    printf("a: %.0f\n", a);
    printf("%.3f\n", b);
    printf("%.0f + %.3f = %.2f", a, b, kq);

    return 0;
}
