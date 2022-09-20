#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: generation of random valid passwords
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0.
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
