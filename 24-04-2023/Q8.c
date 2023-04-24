#include <stdio.h>

int main() {
    int P = 60, Q = 70, R = 3;
    printf("Numbers are = ");
for (int i = P; i <= Q; i++) {
int temp = i;
  while (temp != 0) {
if (temp % 10 == R) {
 goto skip;
}
temp /= 10;
}
printf("%d, ", i);
skip:
continue;
}
return 0;
}
