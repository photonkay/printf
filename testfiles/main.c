#include "main.h"

int main() {
    int num = 42;
    char ch = 'A';
    const char *str = "Hello, World!";
    void *ptr = (void *)&num;

    int bytes_printed;

    bytes_printed = _printf("Pointer address: %p\n", ptr);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Integer: %p\n", &num);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Character: %p\n", &ch);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("String: %p\n", str);
    printf("Bytes Printed: %d\n", bytes_printed);

    bytes_printed = _printf("Pointer: %p, Integer: %p, Character: %p, String: %p\n", ptr, &num, &ch, str);
    printf("Bytes Printed: %d\n", bytes_printed);

    return 0;
}
