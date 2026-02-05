#include <stdio.h>

int main() {
	float  a, b, c, max;
	printf ("Nhap vao a, b ,c: ");
	scanf ("%f %f %f", &a, &b, &c);
	max = a;
	if (max < b){
		max = b;
	}
	if (max < c){
	    max= c;
	}
    printf ("Gia tri lon nhat la : %.2f", max);
    
    return 0;
}
