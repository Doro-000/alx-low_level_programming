#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of args passed
 * @separator: string to be printed between strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list params;

	if (n != 0)
	{
		va_start(params, n);
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s%s", point_to_nil(va_arg(params, char *)), separator);
				else
					printf("%s", point_to_nil(va_arg(params, char *)));
			}
			else
			{
				printf("%s", point_to_nil(va_arg(params, char *)));
			}
		}
	}
	printf("\n");
	va_end(params);
}

char *point_to_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
