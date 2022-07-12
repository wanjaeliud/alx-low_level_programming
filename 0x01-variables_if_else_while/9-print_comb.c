#include <stdio.h>

/**
 * main - Function to print numbers until 9 with commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
		if (c < '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
