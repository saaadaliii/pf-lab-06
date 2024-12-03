#include <stdio.h>
int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }
    
    printf("Divisors of %d are: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i); 
        }
    }
    printf("\n"); // New line after displaying all divisors

    return 0; 
}
