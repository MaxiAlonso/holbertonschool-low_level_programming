#include "search_algos.h"

#include "search_algos.h"

/**
 * print_array - Function that prints an array
 * @array: pointer to the first element of the array
 * @start: first element of the array
 * @end: last element of the array
 **/

void print_array(int *array, int start, int end)
{
	int index = 0;

	printf("Searching in array:");
	for (index = start; index < end; index++)
	{
		printf(" %d,", array[index]);
	}
	printf(" %d\n", array[index]);
}

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * or -1 if value is not present in array or if array is NULL,
 */

int binary_search(int *array, size_t size, int value)
{
	int index = 0, start = 0, end = size - 1;

	if (array != NULL)
	{
		while (start <= end)
		{
			print_array((int *)array, start, end);
			index = (start + end) / 2;
			if (array[index] == value)
				return (index);
			if (array[index] > value)
			{
				end = index - 1;
			}
			else
			{
				start = index + 1;
			}
		}
	}
	return (-1);
}
