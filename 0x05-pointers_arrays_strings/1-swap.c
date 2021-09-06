#include "main.h"

/**
 *swap_int - it swaps the integers that are in *a and *b
 *@a: swaps to the other var
 *@b: does the same as above
 */
void swap_int(int *a, int *b)
{
int n = *b;
*a = *b;
*b = n;
}
