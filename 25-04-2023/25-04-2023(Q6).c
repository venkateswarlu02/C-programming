#include <stdio.h>

#define SIZE 7

int main() {
    int arr[SIZE] = {15, 14, 25, 14, 32, 14, 31};
    int i, j, k;
    printf("Original Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        for (j = i+1; j < SIZE; j++) {
            if (arr[j] == arr[i]) {
                for (k = j; k < SIZE; k++) {
                    arr[k] = arr[k+1];
                }
                SIZE;
                j--;
            }
        }
    }
    printf("Array with duplicates removed: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
