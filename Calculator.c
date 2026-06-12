#include <stdio.h>

int main() {
    // STEP 1: INPUT - ye tune bola
    int choice, a, b;
    
    printf("1.Add  2.Sub  3.Mul  4.Div\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    
    // STEP 2: PROCESS - ye bhi tune bola
    switch(choice) {
        case 1:
            // STEP 3: OUTPUT - ye bhi tune bola
            printf("Sum = %d", a + b);
            break;
        case 2:
            printf("Sub = %d", a - b);
            break;
        case 3:
            printf("Mul = %d", a * b);
            break;
        case 4:
            printf("Div = %d", a / b);
            break;
        default:
            printf("Bhai 1-4 mein se choose kar");
    }
    
    return 0;
}
