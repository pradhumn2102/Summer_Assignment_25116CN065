#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank customer;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &customer.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", customer.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &customer.balance);

    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                customer.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= customer.balance) {
                    customer.balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", customer.balance);
                break;

            case 4:
                printf("\nAccount Number : %d\n", customer.accNo);
                printf("Account Holder : %s\n", customer.name);
                printf("Balance        : %.2f\n", customer.balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}