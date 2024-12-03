#include <stdio.h>
int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    for (int i = n; i >= 1; i--) { 
        for (int j = i; j >= 1; j--) { 
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0; 
}
