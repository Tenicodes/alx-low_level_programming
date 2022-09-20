#include "main.h"

/**
 * _strlen -length of a string
 * @s: A pointer to an integer that will be changed or reset
 *
 * Return: void that means that answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
