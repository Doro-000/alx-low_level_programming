#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	void (*f)(void *x);
	va_list params;
	typedef struct types_funcs
	{
		char type;
		void (*func)(void *x);
	} map;
	map mappings[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	}

	va_start(params, format);
	while (*s)
	{
		if (*s == mappings[i].type)
		{
			f = mappings[i].func;
			f(var_args(params, void *));
			s++;
			i = 0;
			continue;
		}
		i++;
		if (i == 4)
		{
			i = 0;
			s++;
		}
	}
	printf("\n");
	va_end(params);
}


void print_char(void *x)
{
	printf("%c", *(char *)x);
}

void print_int(void *x)
{
	printf("%d", *(int *)x);
}

void print_float(void *x)
{
	printf("%f", *(float *)x);
}

void print_str(void *x)
{
	while (x == NULL)
	{
		*(char *)x = "(nil)";
		break;
	}
	printf("%s", *(char *)x);
}
