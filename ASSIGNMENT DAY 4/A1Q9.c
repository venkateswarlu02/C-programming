#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;
    char choice;

    printf("Enter a student name (up to 50 characters): ");
    scanf("%s", s.name);

    printf("Enter the student's GPA: ");
    scanf("%f", &s.gpa);

    printf("Student name: %s\n", s.name);
    printf("Student GPA: %f\n", s.gpa);

    return 0;
}
