#include "main.h"

/**
 * handle_flags - handles +'  ' # flags
 * @format: format string
 * Return: chars printed
 */
int handle_flags(const char **format)
{
	int plus_flag = 0;
	int space_flag = 0;
	int hash_flag = 0;

	while (**format == '+' || **format == ' ' || **format == '#')
	{
		if (**format == '+')
			plus_flag = 1;
		else if (**format == ' ')
			space_flag = 1;
		else if (**format == '#')
			hash_flag = 1;
		(*format)++;
	}

	if (plus_flag)
		write(1, "+", 1);
	else if (space_flag)
		write(1, " ", 1);

	return (plus_flag + space_flag + hash_flag);
}
