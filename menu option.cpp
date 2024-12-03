#include <stdio.h>
int main() {
    int choice;
    int total_bill = 0;

    while (1) {
        
        printf("Welcome to the Cafeteria!\n");
        printf("1. Tea - $2\n");
        printf("2. Coffee - $3\n");
        printf("3. Sandwich - $5\n");
        printf("4. Burger - $7\n");
        printf("5. Exit\n");

        printf("Please select an option (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                total_bill += 2;
                printf("You selected Tea. Added $2 to the bill.\n");
                break;
            case 2:
                total_bill += 3;
                printf("You selected Coffee. Added $3 to the bill.\n");
                break;
            case 3:
                total_bill += 5;
                printf("You selected Sandwich. Added $5 to the bill.\n");
                break;
            case 4:
                total_bill += 7;
                printf("You selected Burger. Added $7 to the bill.\n");
                break;
            case 5:
                printf("Thank you for visiting the Cafeteria!\n");
                printf("Your final bill is: $%d\n", total_bill);
                return 0;  // Exit the program
            default:
                printf("Invalid choice, please select a number between 1 and 5.\n");
                continue;
        }

        printf("Current total bill: $%d\n\n", total_bill);
    }

    return 0;
}

