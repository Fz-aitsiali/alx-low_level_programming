#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input number to get its factorial
 * Return: integral factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}