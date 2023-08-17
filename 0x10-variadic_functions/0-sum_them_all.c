#include "variadic_functions_h"

/**
 * sum_them_all - returns the sum of all its parametes
 * @n: number of arguments passed to the function
 *
 * Return: The final sum
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += args(list, int)

	va_end(list);

	return (sum);
}
