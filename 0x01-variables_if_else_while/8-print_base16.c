#include <stdio.h>

/**
 * main - Function to print The alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char alphabet;

	for (c = '0'; c <= '9'; c++)
	{
	putchar (c);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
	putchar (alphabet);
	}
	putchar('\n');
	return (0);
}
