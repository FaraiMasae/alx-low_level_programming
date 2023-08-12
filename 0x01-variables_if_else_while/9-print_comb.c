#include <stdio.h>
/**
 * main - entry point
 * Description: commas and spaces
 * Return: always zero (a win)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
