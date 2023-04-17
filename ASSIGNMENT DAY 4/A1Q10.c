#include <stdio.h>
#include <math.h>

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char choice;

    printf("Enter the shape you want to calculate (c for circle, r for rectangle): ");
    scanf("%c", &choice);

    if (choice == 'c') {
        printf("Enter the circle's radius: ");
        scanf("%f", &s.radius);
        float area = M_PI * s.radius * s.radius;
        printf("The circle's area is: %f\n", area);
    } else if (choice == 'r') {
        printf("Enter the rectangle's length: ");
        scanf("%f", &s.rectangle.length);
        printf("Enter the rectangle's width: ");
        scanf("%f", &s.rectangle.width);
        float area = s.rectangle.length * s.rectangle.width;
        printf("The rectangle's area is: %f\n", area);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
