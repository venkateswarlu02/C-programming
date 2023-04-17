#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data d;
    char choice;

    printf("Enter a value (i for integer, f for float): ");
    scanf("%c", &choice);

    if (choice == 'i') {
        printf("Enter an integer value: ");
        scanf("%d", &d.i);
        printf("The integer value is: %d\n", d.i);
    } else if (choice == 'f') {
        printf("Enter a float value: ");
        scanf("%f", &d.f);
        printf("The float value is: %f\n", d.f);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
