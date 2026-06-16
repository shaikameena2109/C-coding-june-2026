#include <stdio.h>
int main(){
int marks[5];
int total = 0;
float avg;
printf("enter marks of 5 subjects:");
for(int i = 0; i < 5; i ++){
scanf("%d",&marks[i]);}
for(int i = 0; i < 5; i ++){
total = total + marks[i];
}
avg = total / 5.0;
printf("\ntotal = %d\n", total);
printf("average = %.2f\n", avg);
return 0;
}