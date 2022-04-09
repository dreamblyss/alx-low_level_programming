#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowcase;

for (lowcase = 'z'; lowcase >= 'a'; --lowcase)
{
putchar(lowcase);
}
putchar(0xA);
return (0);
}
