#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("The reverse of the number is: %d\n", reverse);

    return 0;
}

