#include <stdio.h>
int main() {
    int number;
    int oddCount = 0;  
    int evenCount = 0; 

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number == 0) {
            break; 
        }
        if (number % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;
       }
    }

    printf("Total odd numbers: %d\n", oddCount);
    printf("Total even numbers: %d\n", evenCount);

    return 0; 
}

