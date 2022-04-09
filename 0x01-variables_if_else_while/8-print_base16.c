#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digits;
char alphabets;
for (digits = '0'; digits <= '9'; ++digits)
{
putchar(digits);
}
for (alphabets = 'a'; alphabets <= 'f'; ++alphabets)
{
putchar(alphabets);
}
putchar(0xA);
return (0);
}
