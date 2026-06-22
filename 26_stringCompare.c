#include <stdio.h> 

int main() { 
char str1[200], str2[200];
int i, flag = 0;
printf("Enter first string: ");
fgets(str1, 100, stdin);
printf("Enter second string: ");
fgets(str2, 100, stdin);
for(i = 0; str1[i]!= '\0'; i++){
if(str1[i] == '\n') str1[i] = '\0';
}
for(i = 0; str2[i]!= '\0'; i++){
if(str2[i] == '\n') str2[i] = '\0';
}
for(i = 0; str1[i]!= '\0' && str2[i]!= '\0'; i++){
if(str1[i]!= str2[i]){
flag = 1;
break;
}
}
if(str1[i]!= '\0' || str2[i]!= '\0'){
flag = 1;
}
if(flag == 0){
printf("strings are equal: \n");
} else {
printf("strings are not equal: \n");
}
    return 0;
    }
    