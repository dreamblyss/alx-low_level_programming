#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
int result;
result = (num % 10);
if (result < 0)
{
result = (-1 * result);
}
_putchar(result + '0');
return (result);
}
