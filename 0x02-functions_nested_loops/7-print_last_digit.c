#include "main.h"

/**
 * Pirnt_last_digit - print the last digit of the number
 * @n: The number to be treated
 * Return: Value of the digit
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
