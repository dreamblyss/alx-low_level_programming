#include "main.h"

/**
 * print diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
int k, l;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (k = 1; k <= n; k++)
{
for (l = 1; l < k; l++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
