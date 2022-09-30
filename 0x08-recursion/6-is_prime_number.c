#include "main.h"
/**
 * checkPrime - check
 * @i: int
 * @num: number
 * Return: int
 */
int checkPrime(int i, int num)
{
	if (num == i)
		return (0);
	else 
	{
		if ((num % i) == 0)
			return (1);
		else
			return (checkPrime(i + 1, num));
	}
}
/**
 * is_prime_number - check prime
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (checkPrime(2, n) == 0)
		return (0);
	else
		return (1);
}
