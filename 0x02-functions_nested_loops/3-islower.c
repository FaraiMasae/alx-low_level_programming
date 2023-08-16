#include "main.h"

/**
 * _islower -lower case confirming
 * @c: the character being checked
 * Return: 1 for lowercase character 0 for anything other than lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
