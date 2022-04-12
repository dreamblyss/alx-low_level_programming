#include "main.h"
/**
 * jack_bauer - functionthat prints every minute of the day, 24 hour clock
 * tm_hour = hour, tm_min = minutes
 * The loop breaks at the 24th hour
 * The program returns every minute between 0 to 24 hours
*/
void jack_bauer(void)
{
int tm_hour, tm_min;
for (tm_hour = 0; tm_hour < 24; tm_hour++)
{
for (tm_min = 0; tm_min < 60; tm_min++)
{
_putchar((tm_hour / 10) + '0');
_putchar((tm_hour % 10) + '0');
_putchar(':');
_putchar((tm_min / 10) + '0');
_putchar((tm_min % 10) + '0');
_putchar('\n');
}
}
}







