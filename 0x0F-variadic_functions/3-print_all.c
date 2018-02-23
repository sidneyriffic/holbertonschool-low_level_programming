#include <stdio.h>
#include <stdarg.h>
/**
 * goto_valid - return pointer to first valid specifier in string
 *
 * @str: string
 *
 * Return: pointer to first valid specifier in format string
 */
const char *goto_valid(const char *str)
{
	while (*str != 'c' && *str != 'i' && *str != 'f'
	      && *str != 's' && *str != 0)
		str++;
	return (str);
}

/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;

	va_start(list, format);
	ptr = goto_valid(format);
	while (*ptr)
	{
		printf("Top of while %s\n", ptr);
		switch (*ptr)
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			printf("%s", va_arg(list, char *));
		}
		ptr++;
		ptr = goto_valid(ptr);
		if (*ptr)
			printf(", ");
	}
	printf("\n");
}
