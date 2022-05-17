#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers supplied as parameters / arguments
 * @separator: Comma spaced separator to be printed between the numbers
 * @n: integers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
va_list vlists;

va_start(vlists, n);

for (counter = 0; counter < n; counter++)
{

if (!separator)
{
printf("%d", va_arg(vlists, int));
}
else if (separator && counter == 0)
{
printf("%d", va_arg(vlists, int));
}
else
{
printf("%s%d", separator, va_arg(vlists, int));
}
}
va_end(vlists);
printf("\n");
}
