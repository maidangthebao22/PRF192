#include <stdio.h>
int main (){
	long long n,daoNguoc=1;
	printf("Nhap vao so thap phan: ");
		while (scanf ("%lld",&n)!=1||n<0){
		printf("Nhap lai n: ");
		fflush (stdin);
	}
	if (n==0){
		printf("He nhi phan la : 0");
		return 0;
	}
	while (n>0){
		daoNguoc = daoNguoc * 10 + (n % 2);
		n/=2;
	}
	printf("He nhi phan la: ");
	while (daoNguoc>1){
		printf("%lld",daoNguoc % 10);
		daoNguoc /=10;
	}
	return 0;
}