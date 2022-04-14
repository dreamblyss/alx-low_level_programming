#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: number of times the character should be printed
*/
void print_line(int n)
{
int k;
if (n <= 0)
{
_putchar(0x0A);
}
else
{
for (k = 1; k <= n; k++)
{
_putchar('_');
}
_putchar(0x0A);
}
}
