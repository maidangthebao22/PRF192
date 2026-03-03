#include <Stdio.h>
#include <math.h>
int is_prime(int n){
	if(n < 2)
	   return 0;
	for(int i=2; i<= sqrt(n); i++){
		if(n%i == 0)
		return 0;
	}
	return 1;	
}
int main (){
	int a, b;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Cac so nguyen to trong khoang [%d, %d]\n", a, b);
	for(int i = a; i <= b; i++){
		if(i%2 == 0 && i != 2)
		  continue;
		if(is_prime(i))
		  printf("%d ", i);
	}
	return 0;
}