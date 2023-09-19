#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* macro used */
#define BUFFER_SIZE 1024

/* function prototypes */
int _printf(const char *format, ...);
int handle_id(const char **format, va_list args);
int handle_cs(const char **format, va_list args);
int handle_binary(const char **format, va_list list);
int handle_unsigned(const char **format, va_list list);
void flush_buffer(char *buffer, int *buf_idx);

#endif
