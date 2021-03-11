#include "variadic_functions.h"

/**
 * sum_them_all -  adds all the parameters passed to it
 * @n: number of args passed
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list params;

	if (n != 0)
	{
		va_start(params, n);
		for (i = 0; i < n; i++)
			sum += va_arg(params, int);
		va_end(params);
	}
	return (sum);
}
