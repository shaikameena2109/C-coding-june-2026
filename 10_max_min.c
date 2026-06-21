#include <stdio.h>
int main(){
int marks[5];
int max, min;
printf("Enter marks of 5 subjects:");
for(int i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
max = marks[0];
min = marks[0];
for(int i = 1; i < 5; i++){
if(marks[i] > max){
max = marks[i];
}
if(marks[i] < min){
min = marks[i];
  }
}
printf("\nMaximum marks = %d\n", max);
printf("Minimum marks = %d\n", min);
  return 0;
}