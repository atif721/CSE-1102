#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int start,stop,number,guess;
    printf("Enter start Point: ");
    scanf("%d",&start);
    printf("\nEnter stop Point: ");
    scanf("%d",&stop);
    printf("\n");

    srand(time(0));
    number = ((rand()%(stop-start)+1)+start);
    //printf("%d",number);


    for(int i=0; i<10; i++) {
        printf("\nGuess the number : ");
        scanf("%d",&guess);

        if(number==guess) {
            printf("\nCongratulations! You guessed the number!\n");
            printf("Your Score is : %d\n",(10-i));
            return 0;
        } else if(number<guess) {
            printf("\nHigh\n");

        } else if(number>guess) {
            printf("\nLOW\n");

        }
    }

    printf("\nSorry. you ran out of tries. The number was %d\n",number);

}

