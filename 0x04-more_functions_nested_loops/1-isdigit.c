#include "main.h"
#include <stdio.h>

/**
 *_isdigit - will check numbers from 0-9
 *Return 1 - when the output is a digit from 0-9
 *Returns 0 - when otherwise
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
