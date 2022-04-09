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
char lowercase;
char newlyne = 0xA;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase == 'e' || lowercase == 'q')
{
continue;
}
putchar(lowercase);
}
putchar(newlyne);
return (0);
}
