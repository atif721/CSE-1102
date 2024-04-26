//Write a C program to check whether a character is a vowel or consonant.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet : ");
    scanf("%c",&ch);
    printf("\n");

    if(ch=='a' || ch=='A')
    {
        printf("%c is a Vowel",ch);
    }
    else if(ch=='e' || ch=='E')
    {
        printf("%c is a Vowel",ch);
    }
    else if(ch=='i' || ch=='I')
    {
        printf("%c is a Vowel",ch);
    }
    else if(ch=='o' || ch=='O')
    {
        printf("%c is a Vowel",ch);
    }
    else if(ch=='u' || ch=='U')
    {
        printf("%c is a Vowel",ch);
    }
    else
    {
        printf("%c is a Consonant",ch);
    }


    getch();
}
