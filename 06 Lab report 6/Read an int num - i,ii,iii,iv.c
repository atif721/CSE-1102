#include <stdio.h>

int main() {
    int num, originalNum, remainder, count = 0, sum = 0, reversedNum = 0;

    // Input
    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reversing the number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    // Palindrome check
    if (num == reversedNum) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    // Counting number of digits and summing them
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        count++;
        num /= 10;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
