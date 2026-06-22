#include <stdio.h>
int main() {
char str[100];
    int i, words = 0;
 printf("Enter a string: ");
 fgets(str, 100, stdin);
 for(i = 0; str[i]!= '\0'; i++){
 if(str[i] == '\n') str[i] = '\0';
 }
 if(str[0]!= '\0' && str[0]!= ' '){
  words = 1;
  }
  for(i = 0; str[i]!= '\0'; i++){
  if(str[i] == ' ' && str[i+1]!= ' ' && str[i+1]!= '\0'){
  words++;
  }
  }
        printf("Words: %d\n", words);
    return 0;
}