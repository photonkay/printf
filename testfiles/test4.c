#include "main.h"

int main()
{
    unsigned int num1 = 42;
    unsigned int num2 = 255;
    unsigned int num3 = 0;
    unsigned int num4 = 65535;
    unsigned int num5 = 427295;

    int bytes_printed = _printf("Binary representation of %u is: %b\n", num1, num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Binary representation of %u is: %b\n", num2, num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Binary representation of %u is: %b\n", num3, num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Binary representation of %u is: %b\n", num4, num4);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Binary representation of %u is: %b\n", num5, num5);
    printf("Bytes Printed: %d\n", bytes_printed);

    return 0;
}
