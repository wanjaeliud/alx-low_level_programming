#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function to print a ramdon number and it's last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %d", n);
	if (last == 0)
	{
		printf(" is %d and is 0\n", last);
	}
	else
	{
		if (last > 6)
			printf(" is %d and is greater than 5\n", last);
		if (last < 6)
			printf(" is %d and is less than 6 and not 0\n", last);
	}
	return (0);
}
