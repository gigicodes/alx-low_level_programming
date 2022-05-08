#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of any integer
 * @n: parameter inputted
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
