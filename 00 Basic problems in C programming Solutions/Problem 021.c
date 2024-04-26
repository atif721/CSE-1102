//  Write a C program to swap two integer numbers with third variable.

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("\nEnter Second Number : ");
    scanf("%d",&b);
    printf("\n");

    printf("Before Swapping a = %d , b = %d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping a = %d , b = %d",a,b);


    getch();
}
