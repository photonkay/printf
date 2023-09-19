#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* function prototypes */
int _printf(const char *format, ...);
int handle_id(const char **format, va_list args);
int handle_cs(const char **format, va_list args);
int handle_binary(const char **format, va_list list);

#endif
