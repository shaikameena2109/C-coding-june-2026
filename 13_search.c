#include <stdio.h>
int main(){
int marks[5];
int i, key, found = 0;
printf("Enter 5 marks:");
for(int i = 0; i < 5; i++){
scanf("%d", &marks[i]);
}
printf("Enter number to search:");
scanf("%d", &key);
for(i = 0; i < 5; i++){
if(marks[i] == key){
found = 1;
printf("\nNumber %d found! position:%d\n", key, i+1);
break;
}
}
if(found == 0){
printf("\nNumber %d not found in the array\n", key);
}

  return 0;
}