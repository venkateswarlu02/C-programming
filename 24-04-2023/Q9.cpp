#include <stdio.h>

int main() {
    int rows, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

for (int i = 1; i <= rows; i++) {
space = rows - i;
for (int j = 1; j <= space; j++) {
printf("   ");
}
for (int k = i; k >= 1; k--) {
printf("%2d ", k);
}
printf("\n");
}
    return 0;
}
