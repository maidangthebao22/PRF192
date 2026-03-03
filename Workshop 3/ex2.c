#include <stdio.h>
float calculate_taxi_fare(float distance){
	float price;
	if(distance <= 1){
		price = 15000;
	}
	else if(distance <= 30){
		price = 15000 + (distance -1)*12000;
	}
	else{
		price = 15000 + 29*12000 + (distance - 30)*10000;
	}
	return price;
}
int main(){
	float distance;
	printf("Nhap vao km: ");
	scanf("%f", &distance);
	if(distance < 0){
		printf("Nhap sai!");
		return 0;
	}
	float tong = calculate_taxi_fare(distance);
	printf("So tien phai tra: %.0f", tong);
	return 0;
}