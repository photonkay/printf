#include "main.h"
#include <stdio.h>

int main()
{
    char c = 'A';
    char *str = "Hello, World!";

    int count1 = _printf("Character: %c, String: %s, Percent: %%\n", c, str);
    int count2 = _printf("%%c %%s %%%c\n", c);
    int count3 = _printf("Wow");

    printf("Total characters printed in the first call: %d\n", count1);
    printf("Total characters printed in the second call: %d\n", count2);
    _printf("Total in third");
    printf("%d\n", count3);

    return 0;
}
