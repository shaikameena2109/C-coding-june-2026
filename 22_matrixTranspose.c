#include <stdio.h> 

int main() { 
    int mat[2][3], transpose[3][2]; 
    int i, j; 
 printf("Enter 6 numbers for 2x3 matrix: \n "); 
 for(i = 0; i < 2; i++) { 
 for(j = 0; j < 3; j++){
 scanf("%d", &mat[i][j]);
 }
    }
    for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
    transpose[j][i] = mat[i][j];
    }
    }
    printf("\nTranspose Matrix 3x2:\n");
    for(i = 0; i < 3; i++){
    for(j = 0; j < 2; j++){
    printf("%d ",transpose[i][j]);
    }
    printf("\n");
    }
    return 0;
    }
    