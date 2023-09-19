#include "main.h"

int main()
{
    int num = 45;
    char c = 'a';
    char* ch = "Hello";

    _printf("This is a test: %s\n", ch);
    _printf("%c\n", c);
    _printf("%d\n", num);
    return 0;
}
