// Write a C program to print sum and average of three numbers.

#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    float average = (float)sum / 3;

    printf("\nSum of %d + %d + %d = %d\n",num1,num2,num3,sum);
    printf("\nAverage of %d / 3 = %.2f\n",sum,average);

    getch();
}

