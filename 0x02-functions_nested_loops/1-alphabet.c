#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabets
 *		followed by a new line
 * Results: always 0
*/
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
