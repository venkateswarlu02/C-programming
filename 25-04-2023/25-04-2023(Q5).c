#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int mat[ROWS][COLS] = {{1, 2}, {5, 3}};
    int trans[COLS][ROWS], i, j;
    printf("Input Matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose Matrix:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
