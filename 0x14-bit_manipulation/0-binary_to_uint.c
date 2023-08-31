#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string containing binary digits ('0' and '1').
 *
 * Return: The converted unsigned int value, or 0 if invalid input
*/

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int total = 0;
	int shift = 0;

	int len = 0;

	while (b[len] != '\0')
		len++;

	for (int i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total += (b[i] - '0') << shift;
		shift++;
	}

	return (total);
}
