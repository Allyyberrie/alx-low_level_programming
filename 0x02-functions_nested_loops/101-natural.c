#include <stdio.h>

void natural(void);

/**
 * main - Entry point
 *
 * Description: 'the program'
 * Return: 0(Success)
 */

int main(void)
{
	natural();
	return (0);
}

/**
 * natural - print sum of multiples of 3 or 5
 *
 * Return: Always void
 */

void natural(void)
{
	int max = 1024;
	int n = 0;
	int total = 0;

	while (n < max)
	{
		if ((n % 3 == 0) || (n % 5) == 0)
			total += n;
		n++;
	}
	printf("%d\n", total);
}
