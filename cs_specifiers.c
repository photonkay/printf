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
	int str_len, length, num;
	char c;
	char buffer[12];
	char *str;
	char percent;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					return (-1);
				str_len = 0;
				while (str[str_len])
					str_len++;
				write(1, str, str_len);
				char_count += str_len;
			}
			else if (*format == '%')
			{
				percent = '%';
				write(1, &percent, 1);
				char_count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				length = snprintf(buffer, sizeof(buffer), "%d", num);
				write(1, buffer, length);
				char_count += length;
			}
			else
			{
				percent = '%';
				write(1, &percent, 1);
				write(1, format, 1);
				char_count += 2;
			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
