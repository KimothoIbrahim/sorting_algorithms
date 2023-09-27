#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int i;
    int j;
    int container;

    for( i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if(array[i] > array[i + 1])
            {
                container = array[i];
                array[i] = array[i + 1];
                array[i + 1] = container;
                print_array(array, size);
                }
        }
    }
}
