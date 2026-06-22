#include <stdio.h> 

int main() { 
char str1[100], str2[200];
int i;
printf("Enter source string: ");
fgets(str1, 100 ,stdin);
for(i = 0; str1[i]!= '\0'; i++){
str2[i]= str1[i];
}
str2[i] = '\0';
printf("source string: %s", str1);
printf("copied string: %s", str2);
    return 0;
    }
    