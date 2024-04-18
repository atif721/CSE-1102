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

    return 0;
}
