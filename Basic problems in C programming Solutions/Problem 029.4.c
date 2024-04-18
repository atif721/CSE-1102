// Write a C program to print the following ‘n’ line patterns where ‘n’ is a user input.
// Inverted Left half pyramid

#include<stdio.h>
int main()
{
    int rows, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nInverted Left half pyramid pattern:\n\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < rows - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }


    getch();
}
