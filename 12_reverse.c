#include <stdio.h>
int main(){
int marks[5];
int i, temp;
printf("Enter 5 numbers:");
for(int i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
for(i = 0; i < 5/2; i++){
temp = marks[i];
marks[i] = marks[4-i];
marks[4-i] = temp;
}
printf("\nReversed array: ");
for(i = 0; i < 5; i++){
printf("%d ", marks[i]);
}
  return 0;
}