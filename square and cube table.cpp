#include <stdio.h>
int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    printf("Number\tSquare\tCube\n");
    
    for (int i = 1; i <= n; i++) {
        int square = i * i; 
        int cube = i * i * i; 
        printf("%d\t%d\t%d\n", i, square, cube); 
    }

    return 0; 
}
