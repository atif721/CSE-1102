// Write a C program to convert Celsius into Fahrenheit.

#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter Celsius : ");
    scanf("%f",&celsius);

    fahrenheit = ((celsius*9)/5)+32;

    printf("\n%.1f Celsius = %.1f Fahrenheit\n",celsius,fahrenheit);

    getch();
}

