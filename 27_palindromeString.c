#include <stdio.h>
int main() {
    char str[100];
    int i, j, flag = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for(i = 0; str[i]!= '\0'; i++){
        if(str[i] == '\n') str[i] = '\0';
    }
    for(j = 0; str[j]!= '\0'; j++); 
    j--; 
    for(i = 0; i < j; i++, j--){
        if(str[i]!= str[j]){ 
            flag = 1; 
            break;
        }
    }
    if(flag == 0){
        printf("%s is a Palindrome :\n", str);
    } else {
        printf("%s is Not a Palindrome :\n", str);
    }

    return 0;
}