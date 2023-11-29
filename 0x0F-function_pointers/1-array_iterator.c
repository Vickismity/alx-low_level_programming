#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of array
 * @size: sie of the array
 * @action: pointer to the function
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0 ; a < size ; a++)
		action(array[a]);
}
