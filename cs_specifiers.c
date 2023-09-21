#include "main.h"

/**
 * handle_cs - handles the c and s specifiers in printf
 * @format: format string
 * @args: arguments
 * Return: chars printed
 */
int handle_cs(const char **format, va_list args)
{
	int char_count = 0;
	char* str;
	char c;

	if (**format == 'c')
	{
		c = va_arg(args, int);
		char_count += write(1, &c, 1);
	}
	else if (**format == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		char_count += write(1, str, strlen(str));
	}
	else if (**format == '%')
	{
		char_count += write(1, "%", 1);
	}
	else
	{
		char_count += write(1, *format, 1);
	}

	(*format)++;
	return (char_count);
}
