#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print elements of a array
 * @a: array name.
 * @n: elements of the array.
 *
 * Return: Always void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
