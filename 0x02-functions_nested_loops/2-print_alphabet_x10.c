#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a - z
 */
void print_alphabet_x10(void)
{
int h, mult;
mult = 0;
while (mult < 10)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar(0xA);
mult++;
}
}
