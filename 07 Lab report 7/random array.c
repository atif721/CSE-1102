#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_SIZE 100

int main()
{
    int i,array[ARRAY_SIZE];

    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%100;
    }

    printf("Random numbers in the array:\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    return 0;
}

