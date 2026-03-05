#include<stdio.h>
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
void inputArr(int a[], int n){
	int i = 0;
	while(i<n){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
		i++;
	}
}
void outputArr(int a[],int n){
	int i = 0;
	while(i<n){
		printf("%d ", a[i]);
		i++;
	}
}
int isPrime(int n){
	if(n<2){
		printf("Khong phai la so nguyen to");
		return 0;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i == 0)
		return 0;
	}
	return 1;
}
int countPrimes(int a[],int n){
	int count = 0;
	for(int i=0; i<n; i++){
		if(isPrime(a[i])){
			printf("%d ", a[i]);
			count ++;
		}
	}
	return count;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
    inputArr(a, n);
    printf("Mang: ");
    outputArr(a, n);
    printf("\nCac so nguyen to: ");
    int total = countPrimes(a, n);
    printf("\nSo luong so nguyen to: %d", total);
	return 0;
}