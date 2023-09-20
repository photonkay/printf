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
	void *ptr;
	int ptr_chars;
	const char* str;

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
			else if (*format == 'p')
			{
				ptr = va_arg(args, void *);
				ptr_chars = handle_p(ptr);
				if (ptr_chars < 0)
					return -1;
				char_count += ptr_chars;
			}
			else if (*format == 'S')
			{
				str = va_arg(args, const char *);
				char_count += handle_S(str);
			}
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
