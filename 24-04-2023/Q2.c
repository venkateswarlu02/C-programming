#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num, reversed_num = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int digits = 0;


    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    
    for (int i = 1; i <= digits / 2; i++) {
        remainder = temp % 10;
        reversed_num = reversed_num * 10 + remainder;
        temp /= 10;

        remainder = temp % 10;
        reversed_num = reversed_num * 10 + remainder;
        temp /= 10;
    }

    
    if (digits % 2 != 0) {
        remainder = temp % 10;
        reversed_num = reversed_num * 10 + remainder;
    }

    printf("Reverse Number: %d", reversed_num);

    return 0;
}
