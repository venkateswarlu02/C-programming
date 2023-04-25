#include <stdio.h>

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, temp;
    for (i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf("Reverse Array elements = {");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) {
            printf(", ");
        }
    }
    printf("}\n");
    return 0;
}
