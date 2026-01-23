#include <stdio.h>
int main() {
	float thoiGianCho;
	float tien, km, tienThoiGianCho;
	printf("So km: ");
	if (scanf("%f", &km) !=1 || km <0){
		printf ("Nhap sai!\n");
		return 0;
	}
	printf("So phut cho: ");
	if (scanf("%f", &thoiGianCho) !=1 || thoiGianCho < 0){
		printf("Nhap sai!\n");
		return 0;
	}
	if (km <= 0.5){
		tien = 12000;
	}
	else if (km <= 30){
		tien = 12000 + (km - 0.5)*15000;
	}
	else{
		tien = 12000 + (30 - 0.5)*15000 + (km - 30)*12000;
	}
	if (thoiGianCho > 5){
		tienThoiGianCho = (thoiGianCho - 5)*1000;
	}
	float tongTien = tien + tienThoiGianCho;
	printf("%-10s|%-10s|%-10s\n", "So km", "So phut cho", "Tong tien");
	printf("%-10.0f|%-10.0f |%-10.0f", km, thoiGianCho, tongTien);

    return 0;
}
