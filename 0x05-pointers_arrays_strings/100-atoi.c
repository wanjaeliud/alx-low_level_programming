#include "holberton.h"

/**
 * _atoi - Function to convert a string to an integer.
 *
 * @s: string to convert.
 * Return: integer
 *
 */
int _atoi(char *s)

{
	int i = 0;
	int j = 0;
	int k = 0;
	char c;
	unsigned int n = 0;
	unsigned int d = 1;
	int f = 1;
	int z = 0;

	while (s[i] != ('\0'))
	{
		i++;
	}
	for (j = 0 ; j <= i ; j++)
	{
		c = *(s + j);

		if (c >= '0' && c <= '9')
			k = j;
		else if (k != 0)
			break;
	}
	i = k + 1;
	while (i > 0)
	{
		i--;
		c = *(s + i);

		if (c == '-')
			f = f * (-1);

		if (c >= '0' && c <= '9')
		{
			n = n + d * (c - '0');
			d = d * 10;
		}
	}
	z = f * n;
	return (z);
}
