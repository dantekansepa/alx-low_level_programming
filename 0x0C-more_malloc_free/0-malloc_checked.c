#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}
