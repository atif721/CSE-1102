#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_SIZE 20 // you can change the ARRAY_SIZE at your will.

int main()
{
    srand(time(NULL));

    int i,j,prime,array[ARRAY_SIZE], sum=0,True=1,False=0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%50; // here rand()%* is not fixed you can change this range as your will.
    }

    printf("Random numbers in the array:\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%3d] = %d\n",i,array[i]);
    }

    printf("\nPrime numbers are : \n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        prime = True;
        for (j = 2; j <= array[i] / 2; j++)
        {
            if (array[i] % j == 0)
            {
                prime = False;
                break;
            }
        }

        if (prime && array[i] > 1)
        {
            printf("array[%3d] = %d\n",i,array[i]);
            sum += array[i];
        }
    }

    printf("\nSum of prime numbers in the array: %d\n", sum);

    return 0;
}
