#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;   // extract the last digit
        sum += digit;       // add the digit to the sum
        num /= 10;          // remove the last digit from the number
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}

