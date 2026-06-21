#include <stdio.h>
int main(){
int marks[5];
int unique[5];
int i, j, isDuplicate;
int uniqueCount = 0;
printf("Enter 5 numbers:");
for(i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
for(i = 0; i < 5; i++){
isDuplicate = 0;
for(j = 0; j < uniqueCount; j++){
if(marks[i] == unique[j]){
isDuplicate = 1;
break;
}
}
if(isDuplicate == 0){
unique[uniqueCount] = marks[i];
uniqueCount++;
}
}
printf("\nArray after removing duplicates:");
for(i = 0; i < uniqueCount; i++){
printf("%d ", unique[i]);
}
  return 0;
}