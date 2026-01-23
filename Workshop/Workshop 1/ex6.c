#include <stdio.h>

int main() {
	float cc, gk, ck, tongket;
	char diemchu;
	printf("Nhap diem chuyen can: ");
	if (scanf("%f", &cc) !=1 || cc < 0 || cc > 10){
		printf("Nhap sai!\n");
		return 0;
	}
	printf("Nhap diem giua ky: ");
	if (scanf("%f", &gk) !=1 || gk < 0 || gk >10){
		printf("Nhap sai!\n");
		return 0;
	} 
	printf("Nhap diem cuoi ky: ");
	if (scanf("%f", &ck) !=1 || ck < 0 || ck > 10){
		printf("Nhap sai!\n");
		return 0;
	}
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
	printf ("Diem Tong ket: %c\n", diemchu);
	if (cc < 4 || gk < 4 || ck < 4 || diemchu == 'F'){
		printf ("KHONG DU DIEU KIEN TOT NGHIEP");
	}
	else{
		printf ("DU DIEU KIEN TOT NGHIEP");
	}
    return 0;
}
