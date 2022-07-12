#include <stdio.h>

/**
 * main - Function to print numbers base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
