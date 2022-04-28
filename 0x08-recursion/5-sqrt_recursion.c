#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}


/**
 * actual_sqrt_recursion - to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @k: the iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int k)
{
if (k * k > n)
{
return (-1);
}
if (k * k == n)
{
return (k);
}
return (actual_sqrt_recursion(n, k + 1));
}
