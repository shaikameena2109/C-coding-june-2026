#include <stdio.h> 

int main() { 
char str1[200], str2[200];
int i, j;
printf("Enter first string: ");
fgets(str1, 200, stdin);
printf("Enter second string: ");
fgets(str2, 100, stdin);
for(i = 0; str1[i]!= '\0'; i++){
if(str1[i] == '\n'){
str1[i] = '\0';
}
}
i = 0;
while(str1[i]!= '\0'){
i++;
}
for(j = 0; str2[j]!= '\0';j++){
if(str2[j]!= '\n') {
str1[i] = str2[j];
i++;
}
}
str1[i] = '\0';
printf("concatenated string: %s\n", str1);
    return 0;
    }
    