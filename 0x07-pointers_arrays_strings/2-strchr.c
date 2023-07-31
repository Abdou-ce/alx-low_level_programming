#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: the string to be searched
 * @c: the character to be found
 *
 * Return:a pointher to the first occurence of the character 'c'
 * in the string 's', or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s != c)
		{
			s++;
		}
		else
		{
			return(NULL);
		}
	}
}
