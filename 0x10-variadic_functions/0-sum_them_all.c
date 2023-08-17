#include "VARIADIC_FUNCTIONS_H"

/**
 * sum_them_all - returns the sum of all its parametes
 * @n: number of arguments passed to the function
 *
 * RETURN: The final sum
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return(0);

	unsigned int ;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += args(args, int)
	}

	va_end(args);

	return (sum);
}
