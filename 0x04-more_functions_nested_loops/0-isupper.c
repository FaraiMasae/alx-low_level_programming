#include "main.h"

/**
 * _isupper - checks upper
 * @c: character being checked
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
