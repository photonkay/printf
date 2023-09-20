#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int handle_id(const char **format, va_list args);
int handle_cs(const char **format, va_list args);
int handle_binary(const char **format, va_list list);
int handle_unsigned(const char **format, va_list list);


#endif
