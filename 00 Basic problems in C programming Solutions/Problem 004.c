//  Write a C program to find the smaller one among three numbers.

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2 && num1<num3)
    {
        printf("%d is smaller than %d & %d",num1,num2,num3);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is smaller than %d & %d",num2,num1,num3);
    }
    else if(num3<num1 && num3<num2)
    {
        printf("%d is smaller than %d & %d",num3,num1,num2);
    }
    else
    {
        printf("All the numbers are equal");
    }

    getch();
}
