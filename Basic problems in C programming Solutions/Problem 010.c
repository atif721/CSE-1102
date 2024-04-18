// Write a C program to convert a single digit into word.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    switch(x)
    {
    case 0:
        printf("\nZero\n");
        break;
    case 1:
        printf("\nOne\n");
        break;
    case 2:
        printf("\nTwo\n");
        break;
    case 3:
        printf("\nThree\n");
        break;
    case 4:
        printf("\nFour\n");
        break;
    case 5:
        printf("\nFive\n");
        break;
    case 6:
        printf("\nSix\n");
        break;
    case 7:
        printf("\nSeven\n");
        break;
    case 8:
        printf("\nEight\n");
        break;
    case 9:
        printf("\nNine\n");
        break;
    default:
        printf("Invalid Input");
    }


    getch();
}

