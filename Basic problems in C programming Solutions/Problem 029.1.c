// Write a C program to print the following ‘n’ line patterns where ‘n’ is a user input.
// Right half pyramid

#include<stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nRight half pyramid pattern:\n\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}
