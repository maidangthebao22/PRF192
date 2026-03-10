#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a, b;
  int invalid = 0;
  if(scanf("%f %f", &a, &b) !=2)
  invalid = 1;
  float kq = cbrt(a*a+b*b);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  if(invalid == 1){
  	printf("Invalid input");
  	return 0;
  }
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.2f", kq);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
