#include <stdio.h>

int main() {
	int a, b, kqdu;
	float kq;
	char kt;
	scanf("%d %d", &a, &b);
	fflush(stdin);
	scanf("%c", &kt);
	switch(kt){
		case '+':
		 kq = a + b;
		 break;
		case '/':
         if (b == 0){
		   printf ("Khong the chia cho 0");
		   return 0;
		 }
		 kq = (float) a /b;
         printf("%d %c %d = %.2f", a, kt, b, kq);
         return 0;
		case '%':
		 if(b == 0){
			printf("Khong the chia cho 0");
			return 0;
		}
		 kqdu = a % b;
		 printf("%d %c %d = %d", a, kt, b, kqdu);
		 return 0;
		default:
		 printf("Nhap sai!");	
		 return 0;				 
	}
	printf("%d %c %d = %.03f",a, kt, b, kq);
    return 0;
}
