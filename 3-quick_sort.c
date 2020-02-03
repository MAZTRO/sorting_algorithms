#include "sort.h"

/**
 * swap_number - Change the order of positions
 * @num_a: First number
 * @num_b: Second Number
 * @array: Group of data
 * @size: of array
 * Return: Always 0
 */

void swap_number(int *num_a, int *num_b, int *array, size_t size)
{
	int tmp = 0;

	tmp = *num_a;
	*num_a = *num_b;
	*num_b = tmp;
	if (tmp != *num_a)
	{
		print_array(array, size);
	}
}

/**
 * partition - Change the order of positions
 * @array: Group a data.
 * @low: start of array
 * @high: End of array
 * @size: of array.
 * Return: Always 0
 */

size_t partition(int *array, size_t low, size_t high, size_t size)
{
	int i_low = (int)low - 1;
	int pV = array[high];
	size_t idx;

	for (idx = low; idx < high; idx++)
	{
		if (array[idx] < pV)
		{
			i_low++;
			swap_number(&array[i_low], &array[idx], array, size);
		}
	}
	i_low++;
	swap_number(&array[i_low], &array[high], array, size);
	return (i_low);
}

/**
 * Re_quick - Change the order of positions
 * @array: Group a data.
 * @low: start of array
 * @high: End of array
 * @size: of array.
 * Return: Always 0
 */

void Re_quick(int *array, size_t low, size_t high, size_t size)
{
	size_t pI;

	if (low < high)
	{
		pI = partition(array, low, high, size);
		if (pI != 0)
		{
			Re_quick(array, low, pI - 1, size);
		}
		Re_quick(array, pI + 1, high, size);
	}
}

/**
 * quick_sort - Change the order of positions
 * @array: Group a data.
 * @size: of array
 * Return: Always 0
 */

void quick_sort(int *array, size_t size)
{
	if ((array != NULL) && (size > 1))
	{
		Re_quick(array, 0, size - 1, size);
	}
}
