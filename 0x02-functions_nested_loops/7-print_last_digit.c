#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: the integer to extract the last digit from
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n = -n;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
