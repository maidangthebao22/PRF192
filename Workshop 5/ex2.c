#include <stdio.h>
int main() {
  char str[100];
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = 0;
  for (int i = 0; str[i]; i++){
  	char c = tolower(str[i]);
  	if(c == 'a'||c == 'e'|| c == 'i'|| c == 'o'||c == 'u');
  }
  int len = strlen(str);
  for(int i = len - 1; i>=0; i--){
  	printf("%c",str[i]);
  }
  printf("\n");
}
  

  
  
