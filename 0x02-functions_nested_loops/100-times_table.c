#include "main.h"
/**
 * times_table - Function that prints times tables
 * @n: The number of times tables
 *
 * Return: Always 0
 */
void times_table(void)
{
int n;
int a = 0, rep, b;
if (n < 0 || n > 15)
return;
while (a <= n)
{

		for (b = 0; b <= n; b++)

				{

							rep = a * b;

									if (b == 0)

													_putchar('0' + rep);

											else if (rep < 10)

														{

																		_putchar(' ');

																					_putchar(' ');

																								_putchar('0' + rep);

																										}

													else if (rep < 100)

																{

																				_putchar(' ');

																							_putchar('0' + rep / 10);

																										_putchar('0' + rep % 10);

																												}

															else

																		{

																						_putchar('0' + rep / 100);

																									_putchar('0' + (rep - 100) / 10);

																												_putchar('0' + rep % 10);

																														}

																	if (b < n)

																				{																								_putchar(',');																										_putchar(' ');
}
}
_putchar('\n');
a++;
}
}
