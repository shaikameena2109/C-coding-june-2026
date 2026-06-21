#include <stdio.h>
int main(){
int marks[5];
int i, max, smax;
printf("Enter 5 numbers:");
for(i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
max = marks[0];
smax = -1;
for(i = 0; i < 5; i++){
if(marks[i] > max){
smax = max;
max = marks[i];
}
else if(marks[i] > smax && marks[i]!= max){
smax = marks[i];
}
}
printf("\nLargest number: %d\n", max);
printf("Second largest number: %d\n", smax);
  return 0;
}