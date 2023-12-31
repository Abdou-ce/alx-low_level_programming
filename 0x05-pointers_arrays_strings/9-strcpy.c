#include "main.h"

/**
 * *_strcpy - copies the strinf pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
