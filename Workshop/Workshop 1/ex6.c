#include <stdio.h>

int main() {
	float cc, gk, ck, tongket;
	char diemchu;
	printf("Nhap diem chuyen can");
	scanf("%f", &cc);
	printf("Nhap diem giua ky");
	scanf("%f", &gk);
	printf("Nhap diem cuoi ky");
	scanf("%f", &ck);
	tongket = cc*0.1 + gk*0.3 + ck*0.6;
	if (tongket >= 8){
		diemchu = 'A';
	}
	else if (tongket >= 7.0){
		diemchu = 'B';
	}
	else if (tongket >= 5.5){
		diemchu = 'C';
	}
	else if (tongket > 4){
		diemchu = 'D';
	}
	else{
		diemchu = 'F';
	}
	if (cc < 4 || gk < 4 || ck < 4 || diemchu == 'F'){
		printf ("KHONG DU DIEU KIEN TOT NGHIEP");
	}
	else{
		printf ("DU DIEU KIEN TOT NGHIEP");
	}
    return 0;
}
