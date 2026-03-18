#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    scanf("%s", chuoi);
    int length = strlen(chuoi);
    int laDoiXung = 1; 
    for (int i = 0; i < length / 2; i++) {
        if (chuoi[i] != chuoi[length - 1 - i]) {
            laDoiXung = 0;
            break;
        }
    }
    if (laDoiXung) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}