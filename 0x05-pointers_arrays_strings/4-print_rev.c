#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
*/

void print_rev(char *s)
{
	int i, j, lenght;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lenght = i;

	if (lenght == 0)
		return;

	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
