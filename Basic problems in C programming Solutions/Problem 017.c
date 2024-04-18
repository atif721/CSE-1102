// Write a C program to convert Centimeter into Meter.

#include<stdio.h>
int main()
{
    int centim;
    printf("Enter centimeter : ");
    scanf("%d",&centim);

    float meter = centim*0.01;

    printf("\n%d Centimeter = %.2f Meter\n",centim,meter);

    getch();
}

