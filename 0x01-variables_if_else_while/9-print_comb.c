#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit numbers,
 *		seperated by comas and spaces, followed by a new line.
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
