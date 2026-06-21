#include <stdio.h> 

int main() { 
    int arr[5]; 
    int i, pos, n = 5; 
 printf("Enter 5 numbers: "); 
 for(i = 0; i < n; i++) { 
 scanf("%d", &arr[i]);
    }
    printf("enter position to delete from 1 to 5: ");
    scanf("%d", &pos);
    pos = pos - 1;
    for(i = pos; i < n-1; i++){
    arr[i] = arr[i+1];
    }
    n = n - 1;
    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++){
    printf("%d ",arr[i]);
    }
    return 0;
    }
    