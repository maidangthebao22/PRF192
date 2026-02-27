#include <stdio.h>
float findMax(float a, float b, float c){
	float max;
	if(a>b && a>c){
		max = a;
	}
	else if(b>a && b>c){
		max = b;
	}
	else{
		max = c;
	}
	return max;
}
int main(){
	float a, b, c, max;
	scanf("%f %f %f", &a, &b, &c);
	max = findMax(a,b,c);
	printf("%.0f", max);
	return 0;
}
