// Write a C program to print sum of the following series. 1+1/2+1/3+1/4+1/5+…+n

#include <stdio.h>

int main() {
    int term;
    printf("Enter the number of terms: ");
    scanf("%d", &term);

    float sum = 0;

    for (int i = 1; i <= term; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is: %f\n", sum);

    getch();
}
