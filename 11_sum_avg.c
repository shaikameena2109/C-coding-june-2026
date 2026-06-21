#include <stdio.h>
int main(){
int marks[5];
int sum = 0;
float avg;
int i;
printf("Enter marks of 5 subjects:");
for(int i = 0; i < 5; i++){
scanf("%d", &marks[i]);
sum = sum + marks[i];
}
avg = sum / 5.0;
printf("\nSum of marks = %d\n", sum);
printf("Average marks = %.2f\n", avg);
  return 0;
}