#include "holberton.h"

/**
 * print_square - Prints a square.
 * @size: Size of the square
 *
 *Return: Always void.
 */
void print_square(int size)
{
	int col;
	int row;

	if (size > 0)
	{
		for (col = 1 ; col <= size ; col++)
		{
			for (row = 1 ; row <= size ; row++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
