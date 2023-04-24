#include <stdio.h>
#include <math.h>


float add(float x, float n) {
    return x + n;
}
float subtract(float x, float n) {
    return x - n;
}


float multiply(float x, float n) {
    return x * n;
}


float divide(float x, float n) {
    if (n == 0) {
        printf("Error: Division by zero");
        return 0;
    }
    return x / n;
}
float power(float x, float n) {
    return pow(x, n);
}

int main() {
    float x, n, result;
    int choice;


    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%f", &n);

    
    printf("\nChoose an operation to perform:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            result = add(x, n);
            printf("Add(%.2f, %.2f) = %.2f", x, n, result);
            break;
        case 2:
            result = subtract(x, n);
            printf("Subtract(%.2f, %.2f) = %.2f", x, n, result);
            break;
        case 3:
            result = multiply(x, n);
            printf("Multiply(%.2f, %.2f) = %.2f", x, n, result);
            break;
        case 4:
            result = divide(x, n);
            printf("Divide(%.2f, %.2f) = %.2f", x, n, result);
            break;
        case 5:
            result = power(x, n);
            printf("Power(%.2f, %.2f) = %.2f", x, n, result);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
