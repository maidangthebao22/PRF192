#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[100];
  int b[100] = {0};
  for(int i=0; i<n; i++){
  	scanf("%d", &a[i]);
  }
  int found = 0;

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  for(int i=0; i<n; i++){
  	if(b[i] == 0 && a[i]%2 == 0){
  		int count = 1;
  		b[i] = 1;
  		for(int j=i+1; j<n; j++){
  			if(a[j] == a[i]){
  				count++;
  				b[j] = 1;
			  }
		  }
		  printf("%d-%d\n", count, a[i]);
		  found =1;
	  }
  }
  if(found == 0){
  	printf("Not found\n");	
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
