#include <stdio.h>

void findMax(int* a, int* b, int* max) {
    if (*a > *b) {
        *max = *a;
    } else {
        *max = *b;
    }
}

int main() {
    int num1, num2, max;
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    findMax(&num1, &num2, &max);
    printf("%d is the maximum number\n", max);
    return 0;
}
