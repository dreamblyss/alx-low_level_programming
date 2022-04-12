#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
int h;
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar(0xA);
}
