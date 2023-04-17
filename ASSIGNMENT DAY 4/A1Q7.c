#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3;
    float total_marks;
    float avg_marks;
};

struct student students[MAX_STUDENTS];
int student_count = 0;

void calculate_marks(int index) {
    students[index].total_marks = students[index].mark1 + students[index].mark2 + students[index].mark3;
    students[index].avg_marks = students[index].total_marks / 3.0;
}

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("The database is full.\n");
        return;
    }

    printf("Enter the roll number of the student: ");
    scanf("%d", &students[student_count].roll_no);

    printf("Enter the name of the student: ");
    getchar();
    fgets(students[student_count].stud_name, 50, stdin);
    students[student_count].stud_name[strcspn(students[student_count].stud_name, "\n")] = '\0';

    printf("Enter the marks of the student in three subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &students[student_count].mark1);
    printf("Subject 2: ");
    scanf("%f", &students[student_count].mark2);
    printf("Subject 3: ");
    scanf("%f", &students[student_count].mark3);

    calculate_marks(student_count);

    student_count++;

    printf("Student added successfully.\n");
}

void display_students() {
    if (student_count == 0) {
        printf("The database is empty.\n");
        return;
    }

    printf("The details of all the students in the database are:\n");
    for (int i = 0; i < student_count; i++) {
        printf("Roll number: %d\nName: %s\nSubject 1: %.2f\nSubject 2: %.2f\nSubject 3: %.2f\nTotal marks: %.2f\nAverage marks: %.2f\n\n",
               students[i].roll_no, students[i].stud_name, students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }
}

void sort_students() {
    struct student temp;

    for (int i = 0; i < student_count - 1; i++) {
        for (int j = 0; j < student_count - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("The details of all the students in the database arranged in descending order of marks are:\n");
    for (int i = 0; i < student_count; i++) {
        printf("Roll number: %d\nName: %s\nTotal marks: %.2f\nAverage marks: %.2f\n\n",
               students[i].roll_no, students[i].stud_name, students[i].total_marks, students[i].avg_marks);
    }
}

int
