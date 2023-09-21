#include "main.h"

/**
 * handle_p - handles the pointer in printf
 * @ptr: pointer to handle
 * Return: number of characters
 */
int handle_p(void *ptr)
{
	char buffer[BUFFER_SIZE];
	int len = snprintf(buffer, BUFFER_SIZE, "%p", ptr);

	if (len < 0 || len >= BUFFER_SIZE)
		return (-1);
	write(1, buffer, len);
	return (len);
}
