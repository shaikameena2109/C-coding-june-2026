#include <stdio.h> 

int main() { 
    int mat1[2][2], mat2[2][2], sum[2][2]; 
    int i, j; 
 printf("Enter 4 numbers for Matrix1 2x2: \n "); 
 for(i = 0; i < 2; i++) { 
 for(j = 0; j < 2; j++){
 scanf("%d", &mat1[i][j]);
 }
    }
    printf("enter 4 numbers for Matrix2 2x2: \n");
    
    for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    scanf("%d", &mat2[i][j]);
    }
    }
    for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    sum[i][j] = mat1[i][j] + mat2[i][j];
    }
    }
    printf("\nSum of Matrices:\n");
    for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    printf("%d ",sum[i][j]);
    }
    printf("\n");
    }
    return 0;
    }
    