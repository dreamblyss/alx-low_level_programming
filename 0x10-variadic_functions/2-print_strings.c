#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Point of entry
 * @separator - commas spaces separator
 * @n: list of elements
 * Return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int counter;
va_list vlists;
char *strg;

if (separator == NULL)
{
return;
}

va_start(vlists, n);

for (counter = 0; counter < n; counter++)
{

strg =  va_arg(vlists, char *);

if (strg == NULL)
{
strg = "(nil)";
}

printf("%s", strg);

if (counter != (n - 1))
{
printf("%s", separator);
}

}

printf("\n");

va_end(vlists);
}
