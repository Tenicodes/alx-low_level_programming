#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an integer that will be reset
 *
 * Return: void which means the answer is valid
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}

