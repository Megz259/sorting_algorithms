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
	size_t other;
	int temp;

	array[other] = array[1];
	array[other + 1] = array[2];

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
		for (other = 0; other < size - 1; other++)
		{
			do {
				temp = array[1];
				array[1] = array[2];
				array[2] = temp;
			}while (array[1] > array[2]);
		}
}
