#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: a digit being checked
 * Return: if a digit 1 else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
