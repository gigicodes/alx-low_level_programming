#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function to print all natural numbers from n to 98
 * @n: inputted start number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n <98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
}
