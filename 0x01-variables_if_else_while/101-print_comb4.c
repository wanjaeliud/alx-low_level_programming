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
	int q;

	for (c = '0'; c <= '7'; c++)
	{
		for (d = '1'; d <= '8' ; d++)
		{
			for (q = '2'; q <= '9' ; q++)
			{
				if (q != c && q != d && d > c && q > c && q > d)
				{
					putchar (c);
					putchar (d);
					putchar (q);
					if (c < '7' || d < '8' || q < '9')
					{
						putchar (',');
						putchar (' ');
					}
				}
			}

		}
	}
	putchar ('\n');
	return (0);
}
