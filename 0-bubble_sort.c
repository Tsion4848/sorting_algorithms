#include "sort.h"
/**
 * bubble_sort - Sort an array with buble sort algorithm
 * @array: Array that going to be sorted
 * @size: Size of array
 * Return: Nothing, just sort and print when swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, step;

	if (array == NULL || size == 0)
		return;

	for (step = 0 ; step < size - 1 ; step++)
	{
		for (i = 0 ; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
