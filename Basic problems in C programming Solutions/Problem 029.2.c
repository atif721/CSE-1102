// Write a C program to print the following �n� line patterns where �n� is a user input.
// Left half pyramid

#include<stdio.h>
int main()
{

    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nLeft half pyramid pattern:\n\n");

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }


    getch();
}
