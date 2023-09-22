#include "main.h"

/**
 * handle_binary - outputs binary
 * @format: character string
 * @list: list of arguments
 * Return: number of characters printed
 */
int handle_binary(const char **format, va_list list)
{
	unsigned int num;
	int count = 0;
	int i, non_zero = 0;
	char buffer[33];
	int bit;
	char bitChar;

	if (**format == 'b')
	{
		num = va_arg(list, unsigned int);
		for (bit = 31; bit >= 0; bit--)
		{
			bitChar = (num & (1u << bit)) ? '1' : '0';
			if (bitChar == '1' || non_zero)
			{
				buffer[i++] = bitChar;
				non_zero = 1;
			}
		}
		if (i == 0)
			buffer[i++] = '0';
		buffer[i] = '\0';
		count += write(1, buffer, i);
	}
	else
	{
		write(1, format, 1);
		count++;
	}
	(*format)++;
	return (count);
}
