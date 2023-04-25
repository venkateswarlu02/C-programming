#include <stdio.h>

int isComposite(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0, i;
    for (i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }
    printf("Number of Composite Numbers = %d\n", count);
    return 0;
}
