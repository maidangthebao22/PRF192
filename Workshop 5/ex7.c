#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[200];
    int so = 0, chu = 0, khac = 0;
    if (fgets(chuoi, sizeof(chuoi), stdin)) {
        chuoi[strcspn(chuoi, "\n")] = '\0';
    }

    int n = strlen(chuoi);
    for (int i = 0; i < n; i++) {
        if (isdigit(chuoi[i])) {
            so++;
        } 
        else if (isalpha(chuoi[i])) {
            chu++; 
        } 
        else {
            khac++; 
        }
    }

    printf("%d\n", so);
    printf("%d\n", chu);
    printf("%d\n", khac);

    return 0;
}