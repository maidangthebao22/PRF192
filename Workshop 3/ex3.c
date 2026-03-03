#include <stdio.h>
float calculate_salary(float hours, float rate){
	float salary;
	if(hours <= 40){
		salary = hours*rate;
	}
	else{
		float overtime = hours - 40;
		salary = 40*rate + 1.5*rate*overtime;
	}
	return salary;
}
int main(){
	float hours, rate;
	printf("Nhap luong moi gio: ");
	scanf("%f", &rate);
	printf("Nhap so gio lam: ");
	scanf("%f", &hours);
	float total = calculate_salary(hours, rate);
	printf("Tien luong: %.0f", total);
	return 0;
}