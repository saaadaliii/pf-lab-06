#include <stdio.h>

int main() {
    int marks;
    char choice;

    do {
        printf("Enter the student's marks (0-100): ");
        scanf("%d", &marks);

        if (marks < 0 || marks > 100) {
            printf("Invalid input. Please enter marks between 0 and 100.\n");
            continue; 
        }

        if (marks >= 90) {
            printf("Grade: A\n");
        } else if (marks >= 80) {
            printf("Grade: B\n");
        } else if (marks >= 70) {
            printf("Grade: C\n");
        } else if (marks >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }

        printf("Do you want to calculate another grade? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y'); // Repeat if user enters 'y' or 'Y'

    printf("Thank you for using the grade calculator!\n");
    return 0; 
}
