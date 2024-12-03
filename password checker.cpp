#include <stdio.h>
#include <string.h>

int main() {
    const char correct_password[] = "1234"; 
    char input_password[20]; 

    for (int attempts = 0; attempts <3; attempts++) {
        printf("Enter the password (Attempt %d of 3): ", attempts + 1);
        scanf("%s", input_password); 

        if (strcmp(input_password, correct_password) == 0) {
            printf("Access granted!\n");
            break; 
        } else {
            printf("Access denied!\n");
        }
    }

    return 0; 
}
