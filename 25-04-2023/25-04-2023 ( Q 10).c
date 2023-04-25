#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float* arr;
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);
    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    float max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element is: %.2f\n", max);
    free(arr);
    return 0;
}
