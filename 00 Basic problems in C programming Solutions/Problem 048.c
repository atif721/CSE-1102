// Write a C program to print sum of the following series. n+nn+nnn+nnnn+nnnnn+…+n. e.g. : 5+55+555+5555+55555+…+n

#include <stdio.h>

int main()
{
    int term, multiplier,sum=0,num=0;
    printf("Enter the number of terms: ");
    scanf("%d", &term);
    printf("\nEnter the multiplier: ");
    scanf("%d", &multiplier);

    printf("\nThe series is : ");
    for (int i = 1; i <= term; i++)
    {
        num = num * 10 + multiplier;
        sum += num;
        printf("%d ",num);
    }
    printf("\n\n");

    printf("The sum of the series is: %d\n", sum);

    getch();
}
