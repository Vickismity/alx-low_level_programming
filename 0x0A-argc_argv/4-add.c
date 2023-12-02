#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (a = 1 ; a < argc ; a++)
		{
			for (b = 0 ; argv[a][b] != '\0' ; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[a]);
		}
		printf("%d\n", add);
	}
	return (0);
}
