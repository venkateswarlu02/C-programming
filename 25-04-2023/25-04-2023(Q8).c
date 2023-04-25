#include <stdio.h>

void add(int* a, int* b, int* result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, sum;
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    add(&num1, &num2, &sum);
    printf("The sum of the entered numbers is : %d\n", sum);
    return 0;
}
