// Write a C program to count digits of a number

#include<stdio.h>
int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("\nNumber of digits: 1\n");
        return 0;
    }

    while (num != 0)
    {
        count++;
        num /= 10;
    }

    printf("\nNumber of digits: %d\n", count);

    getch();
}
