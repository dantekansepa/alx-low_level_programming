#include "main.h"
#include "stdio.h"

/**
 *_strlen - prints back the length of a string
 *@s: the value to be evaluated
 *Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
