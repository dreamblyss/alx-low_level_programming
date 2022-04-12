#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
int result;
if (ab > 0)
{
result = (ab - 0);
return (result);
}
else if (ab < 0)
{
result = (0 - ab);
return (result);
}
else
{
result = 0;
return (result);
}
}
