#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowcase;
char newline = 0xA;

for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
{
putchar(lowcase);
}
putchar(newline);
return (0);
}
