#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * selection_sort - Sort an array with selection algorithm.
 * @array: the array to sort.
 * @size: size of the array.
 * Return: nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t index = 0, start = 0, min = 0;

	if (!array || size < 2)
		return;

	while (start < size)
	{
		min = start;
		index = start + 1;
		while (index < size)
		{
			if (array[index] < array[min])
				min = index;
			index++;
		}
		if (min != start)
		{
			swap(array, start, min);
			print_array(array, size);
		}
		start++;
	}
}
