#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
*/

void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
