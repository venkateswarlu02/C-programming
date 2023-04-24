#include <stdio.h>


int isPerfect(int n) {
    int sum = 0;

for (int i = 1; i <= n/2; i++) {
if (n % i == 0) {
sum += i;
 }
}

    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
if (n < 0) {
  printf("Error: Enter a positive integer");
} else {
    
if (isPerfect(n)) {
printf("Its a Perfect Number");
} else {
printf("Its not a Perfect Number");
  }
}

return 0;
}
