#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int length;
    printf("Enter the length of the password: ");
    scanf("%d", &length);

    // Define the characters to be used in the password
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char special[] = "!@#$%^&*()";

    // Seed the random number generator
    srand(time(NULL));

    printf("\nGenerated password: ");
    for (int i = 0; i < length; i++) {
        int choice = rand() % 4;  // Generate a random number between 0 and 3

        // Assign characters based on the random choice
        if (choice == 0) {
            printf("%c", uppercase[rand() % 26]);
        } else if (choice == 1) {
            printf("%c", lowercase[rand() % 26]);
        } else if (choice == 2) {
            printf("%c", digits[rand() % 10]);
        } else {
            printf("%c", special[rand() % 10]);
        }
    }
    printf("\n");

    return 0;
}
