#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int j = 0, last_arg;
	char type;
	va_list params;

	va_start(params, format);
	last_arg = filter_format(format);
	while (*(format + j) != '\0')
	{
		type = *(format+j);
		switch(type)
		{
			case 'c':
				printf("%c", va_arg(params, int));
				print_comma(j, last_arg);
				j++;
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				print_comma(j, last_arg);
				j++;
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				print_comma(j, last_arg);
				j++;
				break;
			case 's':
				printf("%s", point_to_nil(va_arg(params, char *)));
				print_comma(j, last_arg);
				j++;
				break;
			default:
				j++;
			break;
		}	
	}	
	printf("\n");
	va_end(params);
}

int filter_format(const char * const format)
{
    int i = 0, j = 0;
    char type;
    while (*(format + j) != '\0')
	{
		type = *(format+j);
		switch(type)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}	
	}
	return i;
}

void print_comma(int j, int x)
{
    if (j != x)
    {
        printf(", ");
    }
}

char *point_to_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
