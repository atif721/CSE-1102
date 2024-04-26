// Write a C program to print the factors of an integer number and count the number of factors.

#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter an integer number : ");
    scanf("%d",&num);
    printf("\n");

    printf("Factors of %d : ",num);

    for(int i = 1; i<=num; i++)
    {
        if(num % i==0)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n\n");
    printf("Number of factors : %d",count);


    getch();
}
