#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *xy = "_putchar";
while (*xy)
{
_putchar(*xy);
xy++;
}
_putchar('\n');
return (0);
}
