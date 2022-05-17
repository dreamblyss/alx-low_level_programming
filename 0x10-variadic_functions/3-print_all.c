#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Point of entry to print anything
 * @format: argument list
 */

void print_all(const char * const format, ...)
{
int counter = 0;
char *strg, *sdet = "";
va_list vlists;
va_start(vlists, format);
if (format)
{
while (format[counter])
{
switch (format[counter])
{
case 'c':
printf("%s%c", sdet, va_arg(vlists, int));
break;
case 'i':
printf("%s%d", sdet, va_arg(vlists, int));
break;
case 'f':
printf("%s%f", sdet, va_arg(vlists, double));
break;
case 's':
strg = va_arg(vlists, char *);
if (!strg)
{
strg = "(nil)";
}
printf("%s%s", sdet, strg);
break;

default:
counter++;
continue;
}
sdet = ", ";
counter++;
}
}
printf("\n");
va_end(vlists);
}
