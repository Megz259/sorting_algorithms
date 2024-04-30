#include "sort.h"
/*
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: array of integers
 * @size: size of integers in array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int other;
	int temp;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size; i++)
		for (other = 0; other < size; other++)
		{
			if (array[other] > array[other + 1])
			{
				temp = array[other];
				array[other] = array[other + 1];
				array[other + 1] = temp;
			}
			else if (array[other + 1])
			{
				temp = array[other];
				array[other] = array[other + 1];
				array[other + 1] = temp;
			}
		}
}
