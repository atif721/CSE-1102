// Write a C program to convert height (Centimeter into Feet-Inch).

// 1 Inch = 2.54 Centimeter
// 1 Feet = 12 Inch
// 1 Feet = 30.48 Centimeter

#include<stdio.h>
int main()
{
    float Cheight,totalinch;
    int feet,inches;
    printf("Enter your height in centimeter : ");
    scanf("%f",&Cheight);

    totalinch = Cheight / 2.54;
    feet = (int)totalinch / 12;
    inches = (int)totalinch - (feet*12);

    printf("Your Height is %d Feet %d Inches",feet,inches);


    getch();
}

