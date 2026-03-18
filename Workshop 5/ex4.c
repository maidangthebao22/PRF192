#include <stdio.h>
int main() {
    char chuoi[200];
    fgets(chuoi, sizeof(chuoi), stdin);
    int soTu = 0;
    int dangTrongTu = 0; 
    for (int i = 0; i < strlen(chuoi); i++) {
        if (!isspace(chuoi[i])) {
            if (dangTrongTu == 0) {
                soTu++;        
                dangTrongTu = 1; 
            }
        } else {
            dangTrongTu = 0;
        }
    }

    printf("%d", soTu);
    return 0;
}