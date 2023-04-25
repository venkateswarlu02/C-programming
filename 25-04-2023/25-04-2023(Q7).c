#include <stdio.h>

#define SIZE 7

int main() {
    int arr[SIZE] = {16, 18, 27, 16, 23, 21, 19};
    int element = 23;
    int i, pos = -1;
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Given element %d is not found in the array\n", element);
    } else {
        printf("Given element %d is found at %d th position\n", element, pos+1);
    }
    return 0;
}
