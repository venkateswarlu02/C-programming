#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;

    // Multiplying all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;

    // Taking input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Checking if the number is positive
    if (n < 0) {
        printf("Error: Enter a positive integer");
    } else {
        // Calculating factorial of the number
        int fact = factorial(n);
        printf("%d! = %d", n, fact);
    }

    return 0;
}
