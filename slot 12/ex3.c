#include <stdio.h>
void ASCII(){
	char i;
	for(i='A'; i<='Z'; i++){
		printf("%c: %d\n",i, i);
	}
}
int main(){
	ASCII();
	return 0;
}