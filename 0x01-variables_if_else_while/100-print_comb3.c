#include <stdio.h>

/**
 * main - Function to print numbers from 00 until 99 with commas using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '1'; d <= '9' ; d++)
		{
			if (d != c && d > c)
			{
				putchar (c);
				putchar (d);
				if (c < '8' || d < '9')
				{
					putchar (',');
					putchar (' ');
				}
			}

		}
	}
	putchar ('\n');
	return (0);
}
