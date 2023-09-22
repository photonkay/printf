#include "main.h"

/**
 * handle_S - handles a custom specifier
 * @str: format string
 * Return: number of characters
 */
int handle_S(const char *str)
{
	char hex[4];
	char c;
	int count = 0;

	while (*str)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			snprintf(hex, sizeof(hex), "\\%02X", (unsigned char)*str);
			write(1, hex, 4);
			count += 4;
		}
		else
		{
			c = *str;
			write(1, &c, 1);
			count++;
		}
		str++;
	}
	return (count);
}
