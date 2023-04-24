#include "sort.h"

/**
 * selection_sort - sorts an array of integers using a selction sort
 * algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void selection_sort(int *array, size_t size)
{
	int a, b, min_j, temp, n = (int)size;

	if (!array || size < 2)
		return;

	for (a = 0; a < n - 1; a++)
	{
		min_j = a;
		for (b = a + 1; b < n; b++)
		{
			if (array[b] < array[min_j])
			{
				min_j = b;
			}
		}
		if (min_j != a)
		{
			temp = array[a];
			array[a] = array[min_j];
			array[min_j] = temp;
			print_array(array, size);
		}
	}
}
