#include <stdio.h>
int main(){
int marks[5];
int i, j, temp;
printf("Enter 5 numbers:");
for(int i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
for(i = 0; i < 4; i++){
for(j = 0; j < 4-i; j++){
if(marks[j] > marks[j+1]){
temp = marks[j];
marks[j] = marks[j+1];
marks[j+1] = temp;
}
}
}
printf("\nSorted array: ");
for(int i = 0; i < 5; i++){
printf("%d ",marks[i]);
}
  return 0;
}