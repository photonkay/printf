#include "main.h"

/**
 * binary - outputs binary
 * @format: character string
 * Return: number of characters printed
 */
int handle_binary(const char **format, va_list list)
{
	unsigned int num;
	int count = 0;
	int bit, i, numBits; 
	char bitChar;

	if (**format == 'b')
	{
		num = va_arg(list, unsigned int);
		numBits = sizeof(num) * 8;
		for (i = numBits - 1; i >= 0; i--)
		{
			bit = (num >> i) & 1;
			bitChar = bit + '0';
			write(1, &bitChar, 1);
		}
		count += numBits;
	}
	else
	{
		write(1, format, 1);
		count++;
	}
	(*format)++;
	return (count);
}
