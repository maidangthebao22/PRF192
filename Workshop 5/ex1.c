#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    while (str[count] != '\0') {
        count++;
    }
    printf("%d", count);

    return 0;
}