#include "main.h"

int main()
{
    int num1 = 42;
    int num2 = -123;
    int num3 = 0;
    int num4 = 987654321;
    int num5 = -9876;
    int num6 = 2147483647;

    int bytes_printed = _printf("Positive Integer: %d\n", num1);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Negative Integer: %i\n", num2);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Zero: %d\n", num3);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Large Integer: %i\n", num4);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Minimum Integer: %i\n", num5);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Maximum Integer: %d\n", num6);
    printf("Bytes Printed: %d\n", bytes_printed);

    return 0;
}
