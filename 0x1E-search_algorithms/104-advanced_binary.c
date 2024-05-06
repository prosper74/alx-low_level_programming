#include "search_algos.h"

/**
* rec_search - Recursively searches for a value in an array of integers
*              using the Binary search algorithm.
*
* @array: Input array.
* @size: Size of the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*
* Description: Prints the array being searched and its partitions.
*/
int rec_search(int *array, size_t size, int value)
{
size_t half = size / 2;
size_t count;

if (array == NULL || size == 0)
	return (-1);

printf("Searching in array");

for (count = 0; count < size; count++)
	printf("%s %d", (count == 0) ? ":" : ",", array[count]);

printf("\n");

if (half && size % 2 == 0)
	half--;

if (value == array[half])
{
	if (half > 0)
	return (rec_search(array, half + 1, value));
	return ((int)half);
}

if (value < array[half])
	return (rec_search(array, half + 1, value));

half++;
return (rec_search(array + half, size - half, value) + half);
}

/**
* advanced_binary - Calls rec_search to perform an advanced binary search.
*
* @array: Input array.
* @size: Size of the array.
* @value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/
int advanced_binary(int *array, size_t size, int value)
{
int index;

index = rec_search(array, size, value);

if (index >= 0 && array[index] != value)
	return (-1);

return (index);
}
