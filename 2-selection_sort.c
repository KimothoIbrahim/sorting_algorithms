#include "sort.h"

/**
 * swap_ints - swap array integers
 * @a: first integer
 * @b: second integer
 */
void swints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - uses selection sort algorithm to put everything in ascending order.
 * @array: int array.
 * @size: The array size.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swints(array + i, min);
			print_array(array, size);
		}
	}
}