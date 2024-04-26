// Write a C program to convert Kilometer to Mile.

#include<stdio.h>
int main()
{
    int kilometer;
    printf("Enter Kilometer : ");
    scanf("%d",&kilometer);

    float miles = kilometer/1.609344;

    printf("\n%d Kilometer = %.2f Miles\n",kilometer,miles);

    getch();
}

