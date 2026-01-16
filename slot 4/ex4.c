#include <stdio.h>
int main() {
	int a,b;
	char pt;
	printf ("Nhap a,b:" );
	scanf ("%d,%d", &a, &b);
	fflush (stdin);
	printf ("Nhap phep toan: ");
	scanf ("%c", &pt);
	if (b==0){
		printf ("Khong the chia cho 0");
	}
	else {
		float kq = (float)a / b;
		printf("Ket qua: %d%c%d = %.2f", a,pt,b,kq );

    return 0;
}
}
