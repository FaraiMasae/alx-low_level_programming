#include "main.h"

/**
 * print_triangle - prints a loop of triangle
 * @size: The number of lines
 * Return: always 0
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
