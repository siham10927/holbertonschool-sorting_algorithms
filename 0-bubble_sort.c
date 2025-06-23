#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: pointer point to the first element of the array
 * @size: the numebr of intergerts in the array
 *
 * Return: the ascending order intergers
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int temp, i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
