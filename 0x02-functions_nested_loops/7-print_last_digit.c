#include "main.h"

/**
 * print_last_digit - print last number
 * @n: the number being tracked
 * Return: last number
 */
int print_last_digit(int n)
{
	int n1;

	n1 = n % 10;
	if (n1 < 0)
	{
		n1 = n1 * -1;
	}
	_putchar(n1 + '0');
	return (n1);
}
