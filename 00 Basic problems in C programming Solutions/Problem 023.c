// Write a C program to find the number of different BDT notes.

#include<stdio.h>
int main()
{
    int note1000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
    printf("Enter the amount of money : ");
    int amount;
    scanf("%d",&amount);

    note1000 = amount / 1000;
    amount = amount % 1000;

    note500 = amount / 500;
    amount = amount % 500;

    note200 = amount / 200;
    amount = amount % 200;

    note100 = amount / 100;
    amount = amount % 100;

    note50 = amount / 50;
    amount = amount % 50;

    note20 = amount / 20;
    amount = amount % 20;

    note10 = amount / 10;
    amount = amount % 10;

    note5 = amount / 5;
    amount = amount % 5;

    note2 = amount / 2;
    amount = amount % 2;

    note1 = amount / 1;

    printf("\nTotal notes needed= \n\n");
    printf("1000 note \t=  %3d\n", note1000);
    printf(" 500 note \t=  %3d\n", note500);
    printf(" 200 note \t=  %3d\n", note200);
    printf(" 100 note \t=  %3d\n", note100);
    printf("  50 note \t=  %3d\n", note50);
    printf("  20 note \t=  %3d\n", note20);
    printf("  10 note \t=  %3d\n", note10);
    printf("   5 note \t=  %3d\n", note5);
    printf("   2 note \t=  %3d\n", note2);
    printf("   1 note \t=  %3d\n", note1);

    getch();
}
