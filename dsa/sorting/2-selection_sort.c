#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 *		using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 */

/*
 * Pseudocode
 * 1. Loop each element in array
 * 2.	set current eleemnt index as smallest_element
 * 2.	Loop each element next after current element in array
 * 3.		if next element < smallest_element
 * 4.			set smallest_element as this index
 * 5.	swap current element with element at smallest_element index
 */

void selection_sort(
	__attribute__ ((unused)) int *array,
	__attribute__ ((unused)) size_t size
)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		size_t j, smallest_int_index = i;
		int temp;

		printf("\n%d\n", array[i]);

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest_int_index])
				smallest_int_index = j;

			printf("%d, ", array[j]);
		}

		printf("\nsmallest: %d\n", array[smallest_int_index]);

		/* Swap current with smallest */
		temp = array[i];
		array[i] = array[smallest_int_index];
		array[smallest_int_index] = temp;
	}
}
