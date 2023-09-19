#include "main.h"

/**
 * _printf - prints charcter, string and percent
 * @format: character string
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == '%')
				char_count += handle_cs(&format, args);
			else if (*format == 'd' || *format == 'i')
				char_count += handle_id(&format, args);
			else if (*format == 'b')
				char_count += handle_binary(&format, args);
			else if (*format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
				char_count += handle_unsigned(&format, args);
			else
			{
				write(1, "%", 1);
				write(1, format, 1);
				char_count += 2;
				format++;
			}
		}
		else
		{
			char_count += write(1, format, 1);
			format++;
		}
	}
	va_end(args);
	return (char_count);
}
