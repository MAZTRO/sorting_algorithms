#include "sort.h"

/**
 * swap_number - Change the order of positions
 * @num_a: First number
 * @num_b: Second Number
 * Return: Always 0
 */

void swap_number(int *num_a, int *num_b)
{
	int tmp = 0;

	tmp = *num_a;
	*num_a = *num_b;
	*num_b = tmp;
}

/**
 * selection_sort - Add node to a list.
 * @array: with data.
 * @size: Of the Array.
 * Return: Always 0.
 */

 void selection_sort(int *array, size_t size)
{
	size_t count = 0, len = 0, cM = 0;

	while (len < size - 1)
	{
		count = len + 1;
		cM = len;
		while (count < size)
		{
			if (array[count] < array[cM])
			{
				cM = count;
			}
			count++;
		}
		swap_number(&array[cM], &array[len]);
		print_array(array, size);
		len++;
	}
}
