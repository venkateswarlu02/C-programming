 #include <stdio.h>

int main() {
    int m, n, i;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &m);
    printf("Enter the limit up to which you want the multiplication table: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%dx%d=%d\n", i, m, i*m);
    }
    return 0;
}
