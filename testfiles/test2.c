#include "main.h"

int main() {
    int num = 42;
    char ch = 'A';
    const char *str = "Hello, World!";

    _printf("Character: %c\n", ch);
    _printf("Integer: %d\n", num);
    _printf("String: %s\n", str);
    _printf("Integer (alternate specifier): %i\n", num);
    _printf("Percent sign: %%\n");
    _printf("Unsupported specifier: %x\n", num);

    return 0;
}
