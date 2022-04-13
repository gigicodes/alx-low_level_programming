#include "main.h"
#include <stdio.h>
/**
 * int _abs(int n) - Computes the absolute value of any integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else 
{
return (n);
}
}
