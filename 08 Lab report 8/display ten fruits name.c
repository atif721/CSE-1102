//  display ten fruits name
#include <stdio.h>

int main() {
    char fruits[10][20];
    int i;

    printf("Enter the names of 10 fruits:\n");

    // Input the names of fruits
    for (i = 0; i < 10; i++) {
        printf("Fruit %d: ", i+1);
        gets(fruits[i]);
    }

    printf("\nList of fruits:\n");
    // Display the names of fruits
    for (i = 0; i < 10; i++) {
        printf("%d. %s\n", i+1, fruits[i]);
    }

    return 0;
}
