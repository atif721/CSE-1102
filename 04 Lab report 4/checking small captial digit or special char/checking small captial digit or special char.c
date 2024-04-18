#include<stdio.h>
int main()
{
   char ch;
   printf("Enter a character : ");
   scanf(" %c",&ch);

   if(ch>='0' && ch<='9')
   {
    printf("\n%c is a digit\n",ch);
   }
   else if(ch>='A' && ch<='Z')
   {
    printf("\n%c is a Capital Letter\n",ch);
   }
   else if(ch>='a' && ch<='z')
   {
    printf("\n%c is a Small Letter\n",ch);
   }
   else
   {
    printf("\n%c is a Special Character\n",ch);
   }

}

