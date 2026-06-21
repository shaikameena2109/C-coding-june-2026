#include <stdio.h> 

int main() { 
    int arr1[5], arr2[3], merged[8]; 
    int i, k = 0; 

    printf("Enter 5 numbers for Array1: "); 
    for(i = 0; i < 5; i++) { 
    scanf("%d", &arr1[i]);
    }

    printf("Enter 3 numbers for Array2: "); 
    for(i = 0; i < 3; i++) { 
    scanf("%d", &arr2[i]);
    }
    for(i = 0; i < 5; i++) { 
    merged[k] = arr1[i]; 
    k++; 
    }
    for(i = 0; i < 3; i++) { 
    merged[k] = arr2[i]; 
    k++; 
    }
    printf("\nMerged Array: "); 
    for(i = 0; i < 8; i++) { 
    printf("%d ", merged[i]); 
    }
     return 0; 
}