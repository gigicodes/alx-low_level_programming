#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter inputted
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last_d;
if (n < 0)
{
last_d = (-1 * (n % 10);
_putchar (last_d + '0');
return (last_d);
}
else
{
last_d = (n % 10);
_putchar (last_d + '0');
return (last_d);
}
}
