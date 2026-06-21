#include <stdio.h> 

int main() { 
    int arr[6]; 
    int i, pos, num; 
 printf("Enter 5 numbers: "); 
 for(i = 0; i < 5; i++) { 
 scanf("%d", &arr[i]);
    }
    printf("enter number to insert: ");
    scanf("%d", &num );
    printf("Enter position from 1 to 6: ");
    scanf("%d", &pos);
    pos = pos - 1;
    for(i = 5; i > pos; i--){
    arr[i] = arr[i-1];
    }
    arr[pos] = num;
    printf("\nArray after insertion: ");
    for(i = 0; i < 6; i++){
    printf("%d ",arr[i]);
    }
    return 0;
    }
    