#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * also duplicate the strings it holds to the new space
 *
 * @str: initial input string
 * Return: pointer to the memory allocated  which is an array of characters
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
