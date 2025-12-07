#include <stdio.h>

int main() {
    int pin,choice;
    const int correctPin = 1876;
    int attempts = 0;
    const int maxAttempts = 3;
    double balance = 1000.0;
    double amount;

    while (attempts < maxAttempts) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Access granted.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. \n");

            if (attempts < maxAttempts) {
                printf("Attempts left: %d\n", maxAttempts - attempts);
            } else {
                printf("No attempts left. Your account is locked.\n");
                return 0;
                }
            }
    }

    do {
        printf("\n===== ATM Menu =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2lf\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New balance: %.2lf\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %.2lf\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
