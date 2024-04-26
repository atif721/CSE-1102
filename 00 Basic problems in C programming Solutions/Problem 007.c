// Write a C program to check a character is either small letter/capital letter/digit/special symbol.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A'...'Z':
        printf("\nThis is a capital letter\n");
        break;

    case 'a'...'z':
        printf("\nThis is a small letter\n");
        break;
    case '0'...'9':
        printf("\nThis is a digit\n");
        break;
    default :
        printf("\nThis is a special character\n");
    }

    getch();
}
