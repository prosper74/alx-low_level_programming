#include "search_algos.h"

/**
* recursive_search - Recursively searches for a value in an array of integers
* using the Binary search algorithm.
*
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t count;

	/* Base case: If the array is NULL or empty, value cannot be found */
	if (array == NULL || size == 0)
		return (-1);

	/* Print the array being searched */
	printf("Searching in array");
	for (count = 0; count < size; count++)
		printf("%s %d", (count == 0) ? ":" : ",", array[count]);
	printf("\n");

	/* Adjust the midpoint if size is even */
	if (half && size % 2 == 0)
		half--;

	/* If the value is found at the midpoint, return the index */
	if (value == array[half])
		return ((int)half);

	/* If the value is less than the midpoint, search the left half */
	if (value < array[half])
		return (recursive_search(array, half, value));

	/* If the value is greater than the midpoint, search the right half */
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
* binary_search - Calls recursive_search to perform a binary search.
*
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/
int binary_search(int *array, size_t size, int value)
{
	int index;

	/* Call recursive_search to perform binary search */
	index = recursive_search(array, size, value);

	/* If index is valid and the value does not match, return -1 */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
