#include  <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the summ of the parameters (arguments)
 * @n: This is the number of args passed (the variadic input)
 *
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list vlist;
unsigned int counter;
int sum = 0;

va_start(vlist, n);

for (counter = 0; counter < n;  counter++)
{
sum += va_arg(vlist, const unsigned int);
}

va_end(vlist);
return (sum);

}
