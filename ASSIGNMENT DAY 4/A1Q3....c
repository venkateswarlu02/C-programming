#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student {
    char name[50];
    int roll_no;
    struct tm birth_date;
    struct tm admission_date;
};

int calculate_age(struct tm birth_date, struct tm admission_date) {
    int age = admission_date.tm_year - birth_date.tm_year;
    if (admission_date.tm_mon < birth_date.tm_mon ||
        (admission_date.tm_mon == birth_date.tm_mon && admission_date.tm_mday < birth_date.tm_mday)) {
        age--;
    }
    return age;
}

int main() {
    struct student s;
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);

    printf("Enter the student name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // remove the newline character at the end of the name input

    printf("Enter the student roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter the student's birth date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &s.birth_date.tm_year, &s.birth_date.tm_mon, &s.birth_date.tm_mday);
    s.birth_date.tm_year -= 1900;
    s.birth_date.tm_mon -= 1;

    printf("Enter the student's admission date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &s.admission_date.tm_year, &s.admission_date.tm_mon, &s.admission_date.tm_mday);
    s.admission_date.tm_year -= 1900;
    s.admission_date.tm_mon -= 1;

    int age_at_admission = calculate_age(s.birth_date, s.admission_date);

    printf("\nStudent Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Birth Date: %d-%d-%d\n", s.birth_date.tm_year + 1900, s.birth_date.tm_mon + 1, s.birth_date.tm_mday);
    printf("Admission Date: %d-%d-%d\n", s.admission_date.tm_year + 1900, s.admission_date.tm_mon + 1, s.admission_date.tm_mday);
    printf("Age at Admission: %d years\n", age_at_admission);

    return 0;
}
