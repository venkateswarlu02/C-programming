#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
if (age >= 18) {
printf("You are eligible to vote");
} else {
int years_left = 18 - age;
printf("You are not eligible to vote\n");
printf("You are allowed to vote after %d years", years_left);
}

return 0;
}
