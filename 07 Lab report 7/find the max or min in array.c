#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_SIZE 50

int main()
{
    // int i,array[ARRAY_SIZE], max, min, max_index = 0, min_index = 0;

    //srand(time(NULL));
    /*
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%100;
    }

    printf("Random numbers in the array:\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    max = min = array[0];
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
        if (array[i] < min)
        {
            min = array[i];
            min_index = i;
        }
    }

    printf("Maximum element in the array: %d (Index: %d)\n", max, max_index);
    printf("Minimum element in the array: %d (Index: %d)\n", min, min_index);
    */

    int i,array[10] = {3, 7, 2, 9, 55, 8, 89, 6, 4, 10}, max = array[0], min = array[0],ma_in=0,mi_in=0;

    for (i = 0; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            //ma_in = i;

        }
        if (min > array[i])
        {
            min = array[i];
            //mi_in = i;
        }
    }
    printf("Maximum value of array[%d] = %d ", i,/*ma_in,*/ max);
    printf("\nMinimum value of array[%d] = %d ",i, /*mi_in,*/ min);


    return 0;
}


