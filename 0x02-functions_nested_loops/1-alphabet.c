#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'Prints the alphabets'
 *
 * Return: Always 0(Success)
 */

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	_putchar('\n');
}
