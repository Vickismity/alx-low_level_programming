#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: pointer to the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t i;

	if (index > sizeof(size_t) * 8 || n == NULL)
		return (-1);
	i = 1;
	i = i << index;
	if (((*n >> index) & 1) == 1)
	*n = i ^ *n;
		return (1);
}
