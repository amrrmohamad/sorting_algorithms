#include "sort.h"

/**
 * bubble_sort - sorts an array of integers...
 *	In ascending order using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: Empty
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int sp;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = sp;
				new_n = i + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
