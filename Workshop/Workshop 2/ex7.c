#include <stdio.h>
int main() {
    int n;
    int i = 0;
    printf("Nhap n: ");
    while (scanf("%d", &n) != 1 || n < 0) {
        printf("Nhap lai n: ");
        fflush (stdin);
        
    }
    while (i * i < n) {
        ++i;
    }

    if (i * i == n) {
        printf("%d la so chinh phuong\n", n);
    } else {
        printf("%d khong phai la so chinh phuong\n", n);
    }

    return 0;
}