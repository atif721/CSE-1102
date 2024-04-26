// Write a C program to swap two integer numbers without third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("\nEnter Second Number : ");
    scanf("%d",&b);
    printf("\n");

    printf("Before Swapping a = %d , b = %d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping a = %d , b = %d",a,b);


    getch();
}
