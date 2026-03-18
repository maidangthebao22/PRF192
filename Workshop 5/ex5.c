#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];
    char find, replace;
    int dem = 0;
    scanf("%s", chuoi);
    scanf(" %c", &find);
    scanf(" %c", &replace);
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        if (chuoi[i] == find) {
            chuoi[i] = replace; 
            dem++;             
        }
    }
    printf("%d\n", dem);
    printf("%s\n", chuoi);
    return 0;
}