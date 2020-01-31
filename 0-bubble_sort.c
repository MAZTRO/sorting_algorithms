#include "sort.h"

/**
 * bubble_sort - swap the values from couple to couple
 * @array: Element to sort
 * @size: of the Array
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
 * bubble_sort - swap the values from couple to couple
 * @array: Element to sort
 * @size: of the Array
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t ps_1, ps_2;

	if ((array != NULL) & (size > 2))
	{
		for(ps_1 = 0; ps_1 < (size - 1); ps_1++)
		{
			for(ps_2 = 0; ps_2 < (size - ps_1 - 1); ps_2++)
			{
				if (array[ps_2] > array[ps_2 + 1])
				{
					swap_number(&array[ps_2], &array[ps_2 + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
