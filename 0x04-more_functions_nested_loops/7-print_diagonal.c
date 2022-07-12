#include "holberton.h"

/**
 * print_diagonal -  draws a draws a diagonal line of n characters
 * @n: lenght of line
 *
 * Return: void.
 *
 */
void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1 ; row <= n ; row++)
		{
			for (col = 1 ; col <= row - 1 ; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
