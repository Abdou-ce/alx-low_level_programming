#include "main.h"
/**
 * _isalpha - checks fr alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is an alphabetic charcter, 0 othrwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
