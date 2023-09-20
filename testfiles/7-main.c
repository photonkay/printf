#include "main.h"

int main()
{
    const char *str = "Hello, \x01World!";
    
    _printf("String with special handling: %S\n", str);

    return 0;
}
