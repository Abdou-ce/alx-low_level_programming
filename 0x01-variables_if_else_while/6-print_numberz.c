#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the single digit numbers in base 10,
 *		starting from 0, followed by a new line
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
