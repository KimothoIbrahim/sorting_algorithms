#include "sort.h"

/**
 * bubble_sort - sorts arrays using bubble sort algorithm in ascending
 * order
 *
 * @array: pointer to the array to sort
 * @size: size of array to sort
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int container;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				container = array[j];
				array[j] = array[j + 1];
				array[j + 1] = container;
				print_array(array, size);
			}
		}
	}
}
