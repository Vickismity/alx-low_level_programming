#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: character pointer to the string
 * Return: the converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, a, i, sum = 0, pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0 ; b[len] != '\0' ; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (a = 0 ; b[a] != '\0' ; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		for (i = len - 1 ; i > 0 ; i--)
		pow = pow * base;
		sum = sum + (pow * (b[a] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
