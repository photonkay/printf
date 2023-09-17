#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - outputs char and string
 * @format: different specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count, i, len;
	char c;
	char* str;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(list, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(list, char *);
				for (i = 0; str[i] !='\0'; i++)
					len++;
				write(1, str, len + 1);
				count += len + 1;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else
			{
				write(1, "%", 1);
				write(1, format, 1);
				count +=2;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
