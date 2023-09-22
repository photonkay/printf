#include "main.h"

/**
 * handle_unsigned - outputs unsigned int, oct and hex
 * @format: character string
 * @list: arguments
 * Return: number of characters printed
 */
int handle_unsigned(const char **format, va_list list)
{
	unsigned int num;
	int count = 0;
	int digits;
	char buffer[12];

	if (**format == 'u')
	{
		num = va_arg(list, unsigned int);
		digits = sprintf(buffer, "%u", num);
		count += write(1, buffer, digits);
	}
	else if (**format == 'o' || **format == 'x' || **format == 'X')
	{
		num = va_arg(list, unsigned int);
		digits = sprintf(buffer, "%lX", (unsigned long)num);
		buffer[1] = **format;
		count += write(1, buffer, digits);
	}
	else
	{
		write(1, format, 1);
		count++;
	}

	(*format)++;
	return (count);
}
