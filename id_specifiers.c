#include "main.h"

/**
 * handle_id - handles the i and d specifiers in printf
 * @format: character string
 * args: arguments
 * Return: number of printed chars
 */
int handle_id(const char **format, va_list args)
{
	int char_count = 0;
	int num, len;
	char buffer[12];

	if (**format == 'd' || **format == 'i')
	{
		num = va_arg(args, int);
		len = snprintf(buffer, sizeof(buffer), "%d", num);
		char_count += write(1, buffer, len);
	}
	else
	{
		char_count += write(1, *format, 1);
	}

	(*format)++;
	return (char_count);
}
