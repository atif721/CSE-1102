// Write a C program to check even or odd numbers n time where n is user input.

#include<stdio.h>
int main()
{
    int n, num;

    printf("Enter the number of times you want to check: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
    }

    getch();
}
