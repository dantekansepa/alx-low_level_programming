#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints a sting followed by a new line
 *@str: value to be evaluated
 *Return: a string to stdout
 */
void _putchar(char *str)
{
int l = 0;
while (*(str + 1) != '\0')
{
_putchar(str[1]);
l++;
}
_putchar('\n');
}
