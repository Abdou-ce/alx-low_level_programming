#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase,
 *		excluding the letters 'q' and 'e',
 *		followed by a new line.
 * Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
