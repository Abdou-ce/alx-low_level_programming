#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
*/

char *strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	length = 0;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	dup = malloc(sizeof(char) + (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
