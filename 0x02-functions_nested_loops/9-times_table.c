#include "main.h"
/**
 * times_table - a function that prints the 9 timestable starting with 0
 * num = rows, exp = columns, x = result
 * Returns: times table
 * add extra space past single digit
 */
void times_table(void)
{
int num, exp, x;
for (num = 0; num <= 9; num++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (exp = 1; exp <= 9; exp++)
{
x = (num * exp);
if ((x / 10) > 0)
{
_putchar((x / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((x % 10) + '0');
if (exp < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
