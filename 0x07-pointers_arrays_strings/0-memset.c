#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to copy
 * @n: the number of times to copy b
 *
 * Return: Pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int = i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
