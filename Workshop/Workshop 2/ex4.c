#include <stdio.h>
int main(){
	int n;
	int i=0;
	printf("Nhap vao n: ");
	while(scanf("%d", &n) !=1){
		printf("Nhap lai n: ");
		fflush (stdin);
	}
	while(n != 0){
		i = i*10 + (n%10);
		n = n/10;
	}
	printf("%d", i);
}