#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascendig order.
 *
 * @array: An array of integers to be sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, len = size;
	int bubble = 0;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (bubble == 0)
	{
		bubble = 1;
		for (index = 0; index < len - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
				bubble = 0;
			}
		}
		len--;
	}
}
