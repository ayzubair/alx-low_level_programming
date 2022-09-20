#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: stores the string to be printed
 *
 * Return: reversed strings
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = 0; i - 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
