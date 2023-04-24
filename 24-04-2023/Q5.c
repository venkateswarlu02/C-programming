#include <stdio.h>

int main() {
    float n;

    
    printf("Enter a decimal number: ");
    scanf("%f", &n);

    
    float square = n * n;
    float cube = n * n * n;

    
    printf("Square Number: %f\n", square);
    printf("Cube Number: %f\n", cube);

    return 0;
}
