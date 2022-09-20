#include "main.h"

/**
 * swap_int - swap the values of two integers, a and b
 * @a: A pointer to an integer that will be reset
 * @b: B pointer to an integer that will be reset
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b);
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}

