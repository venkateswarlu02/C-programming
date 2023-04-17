#include <stdio.h>
#include <string.h>

struct customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct customer customers[], int num_customers) {
    printf("Customers with balance less than Rs. 100:\n");
    for (int i = 0; i < num_customers; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d\nName: %s\n\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    struct customer customers[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the account number for customer %d: ", i + 1);
        scanf("%d", &customers[i].account_no);

        printf("Enter the name of customer %d: ", i + 1);
        getchar(); // clear the input buffer before reading the name input
        fgets(customers[i].name, 50, stdin);
        customers[i].name[strcspn(customers[i].name, "\n")] = '\0'; // remove the newline character at the end of the name input

        printf("Enter the balance for customer %d: ", i + 1);
        scanf("%f", &customers[i].balance);

        printf("\n");
    }

    print_low_balance_customers(customers, 3);

    return 0;
}
