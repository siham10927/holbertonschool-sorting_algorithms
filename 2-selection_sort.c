#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - swap first element with second elem
 * @first: first elem
 * @second: second elem
*/

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * selection_sort - sort array of ints in ascending order
 * @array: array containing all elements
 * @size: number of elements in array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, min_element, j;

	i = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (i < (size - 1))
	{
		min_element = i;
		j = i + 1;

		while (j < size)
		{
			if (array[j] < array[min_element])
				min_element = j;
			j++;
		}

		if (min_element != i)
		{
			swap(&array[min_element], &array[i]);
			print_array(array, size);
		}
		i++;
	}
}
