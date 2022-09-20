#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an int that will be reset or changed
 * @n: return value n
 * Return: void which meansthe answer is correct
 */
void print_array(int *a, int n)

{
	int i;

	i = 0;
	while (i < n)
	{

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
