#include <stdio.h>
#include "main.h"
int main()
{
    unsigned int u_num1 = 42;
    unsigned int u_num2 = 0;
    unsigned int u_num3 = 4294967;

    unsigned int o_num1 = 123;
    unsigned int o_num2 = 0;
    unsigned int o_num3 = 0777;

    unsigned int x_num1 = 255;
    unsigned int x_num2 = 0;
    unsigned int x_num3 = 0x1F;

    unsigned int X_num1 = 4095;
    unsigned int X_num2 = 0;
    unsigned int X_num3 = 0xFFFF;

    int bytes_printed = _printf("Unsigned: %u\n", u_num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Unsigned: %u\n", u_num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Unsigned: %u\n", u_num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Octal: %o\n", o_num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Octal: %o\n", o_num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Octal: %o\n", o_num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Lowercase Hex: %x\n", x_num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Lowercase Hex: %x\n", x_num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Lowercase Hex: %x\n", x_num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Uppercase Hex: %X\n", X_num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Uppercase Hex: %X\n", X_num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Uppercase Hex: %X\n", X_num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    return 0;
}
