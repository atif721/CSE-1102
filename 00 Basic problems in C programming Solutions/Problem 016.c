// Write a C program to convert height (Feet-Inch into Centimeter).

// 1 Inch = 2.54 Centimeter
// 1 Feet = 12 Inch
// 1 Feet = 30.48 Centimeter

#include<stdio.h>
int main()
{
    int Fheight,Iheight;
    float CmFeet,CmInches,totalcentimeter;
    printf("Enter your height in Feet : ");
    scanf("%d",&Fheight);
    printf("\nEnter your height in Inches : ");
    scanf("%d",&Iheight);

    CmFeet = Fheight*30.48;
    CmInches = Iheight*2.54;
    totalcentimeter = CmFeet+CmInches;

    printf("\nYour Height is %.2f Centimeter\n",totalcentimeter);


    getch();
}

