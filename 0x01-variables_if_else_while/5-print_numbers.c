#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the single digit numbers in base 10,
 *		starting from 0 , followed by a new line.
 * Return: always 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
