#include <stdio.h>
int main() {
    float balance = 1000.0; 
    int choice;
    float amount;

    while (1) {
        
        printf("Welcome to the ATM!\n");
        printf("1: Check Balance\n");
        printf("2: Withdraw Money\n");
        printf("3: Deposit Money\n");
        printf("4: Exit\n");

        printf("Please select an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2: 
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);

                if (amount > balance) {
                    printf("Insufficient funds! You cannot withdraw more than your balance.\n");
                } else {
                    balance -= amount;
                    printf("You have successfully withdrawn $%.2f.\n", amount);
                    printf("Your new balance is: $%.2f\n", balance);
                }
                break;
            case 3: 
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                balance += amount;
                printf("You have successfully deposited $%.2f.\n", amount);
                printf("Your new balance is: $%.2f\n", balance);
                break;
            case 4: 
                printf("Thank you for using the ATM.\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please select a valid option (1-4).\n");
                break;
        }
    }

    return 0;
}

