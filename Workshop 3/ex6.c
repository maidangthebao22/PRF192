#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    int soDoan, soBimat;
    int lan = 0;
    srand(time(NULL));
    soBimat = rand() % 10 + 1;
    while (lan < 7) {
        printf("Lan %d Nhap vao so ban doan: ", lan + 1);
        scanf("%d", &soDoan);

        if (soDoan < 1 || soDoan > 10) {
            printf("Nhap lai!\n");
            continue;
        }
        lan++;
        if (soDoan > soBimat) {
            printf("Nho hon\n");
        }
        else if (soDoan < soBimat) {
            printf("Lon hon\n");
        }
        else {
            printf("Chuc mung ban da doan dung! So bi mat la: %d\n", soBimat);
            break;
        }
    }

    if (lan == 7 && soDoan != soBimat) {
        printf("Ban da het luot! So bi mat la: %d\n", soBimat);
    }
}

int main() {
    play_game();
    return 0;
}