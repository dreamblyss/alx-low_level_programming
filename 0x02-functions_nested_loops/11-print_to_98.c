#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @num: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int num)
{
int x, y;
if (num <= 98)
{
for (x = num; x <= 98; x++)
{
if (x != 98)
{
printf("%d, ", x);
}
else if (x == 98)
{
printf("%d\n", x);
}
}
}
else if (num > 98)
{
for (y = num; y >= 98; y--)
{
if (y != 98)
{
printf("%d, ", y);
}
else if (y == 98)
{
printf("%d\n", y);
}
}
}
}
