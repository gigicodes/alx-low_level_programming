#include "main.h"
/**
 * int print_sign(int n) - prints out the sign of a number 
 *
 * Return: Always 0 (Success/Correct)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
