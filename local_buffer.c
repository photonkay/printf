#include "main.h"

/**
 * flush_buffer - serves as local buffer to write contents
 * @buffer: buffer memory
 * @buf_idx: buffer size
 * Return void
 */
void flush_buffer(char *buffer, int *buf_idx)
{
	write(1, buffer, *buf_idx);
	*buf_idx = 0;
}
