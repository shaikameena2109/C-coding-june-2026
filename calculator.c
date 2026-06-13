#include <stdio.h>

int main() {
    // STEP 1: Declare variables for input
    int choice, a, b;
    float result;  // Using float for division result
    
    // Display menu to user
    printf("===== SIMPLE CALCULATOR =====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    
    // STEP 2: Process using switch-case
    switch(choice) {
        case 1:
            // STEP 3: Output result
            result = a + b;
            printf("Sum = %.2f", result);
            break;
            
        case 2:
            result = a - b;
            printf("Difference = %.2f", result);
            break;
            
        case 3:
            result = a * b;
            printf("Product = %.2f", result);
            break;
            
        case 4:
            if(b != 0) {  // Check for division by zero
                result = (float)a / b;  // Typecast to get decimal result
                printf("Division = %.2f", result);
            } else {
                printf("Error: Division by zero is not allowed!");
            }
            break;
            
        default:
            printf("Invalid choice! Please select 1-4 only.");
    }
    
    return 0;
}