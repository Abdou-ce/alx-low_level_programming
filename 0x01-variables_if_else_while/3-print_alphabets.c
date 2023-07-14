#include <stdio.h>
/**
 * main - Entry point
 * Descroption:	prints the alphabet in lowercase,
 *		followed by the alphabet in uppercase,
 *		and then a new line
 * Return: always 0
*/
int main(void)
{
	char(ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
