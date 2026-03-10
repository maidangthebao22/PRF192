#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int invalid = 0;
  int n;
  if(scanf("%d", &n) != 1 || n<0){
  	invalid = 1;
  }
  int a[1000];  
  if(invalid == 0){
  	for(int i=0; i<n; i++){
  	scanf("%d", &a[i]);
  }
}
  int temp;
  for(int i=0; i<n-1; i++){
  	  int swap = 0;
  	for(int j=0; j<n-1-i; j++){
  		if(a[j]<a[j+1]){
  			temp = a[j];
  			a[j] = a[j+1];
  			a[j+1] = temp;
  			swap = 1;
		  }
	  }
	  if(swap == 0){
	  	break;
	  }
  }
  


  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if(invalid == 1){
  	printf("Invalid input");
  	return 0;              
}
  
  for(int i=0; i<n; i++){
  	if(a[i]%2 == 0)
  	printf("%d\n", a[i]);
  }
  
  
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
