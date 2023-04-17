#include <stdio.h>
#include <string.h>

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the employee number for employee %d: ", i + 1);
        scanf("%d", &employees[i].eno);

        printf("Enter the name of employee %d: ", i + 1);
        getchar(); // clear the input buffer before reading the name input
        fgets(employees[i].ename, 50, stdin);
        employees[i].ename[strcspn(employees[i].ename, "\n")] = '\0'; // remove the newline character at the end of the name input

        printf("Enter the salary for employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    int max_salary_index = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[max_salary_index].salary) {
            max_salary_index = i;
        }
    }

    printf("Details of employee with highest salary:\n");
    printf("Employee Number: %d\nName: %s\nSalary: %.2f\n", employees[max_salary_index].eno, employees[max_salary_index].ename, employees[max_salary_index].salary);

    return 0;
}
