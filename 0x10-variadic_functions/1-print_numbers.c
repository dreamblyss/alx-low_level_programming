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
va_list vlist;

if (separator == NULL)
{
return;
}

va_start(vlist, n);

for (counter = 0; counter < n; counter++)
{
printf("%d", va_arg(vlist, const unsigned int));

if (counter != (n - 1))
{
printf("%s", separator);
}

}

printf("\n");

va_end(vlist);
}
