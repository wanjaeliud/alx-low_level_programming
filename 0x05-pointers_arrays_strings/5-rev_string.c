#include "holberton.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: Variable string.
 *
 * Return: Always void.
 */
void rev_string(char *s)
{
	int l, i;
	char *end_ptr, ch;

	end_ptr = s;

	for (l = 0 ; *end_ptr != '\0' ; l++)
	{
		end_ptr++;
	}
	end_ptr = end_ptr - 1;

	for (i = 0; i < l / 2 ; i++)
	{
		ch = *end_ptr;
		*end_ptr = *(s + i);
		*(s + i) = ch;
		end_ptr--;
	}
}
