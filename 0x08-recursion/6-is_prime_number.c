#include "main.h"

int actual_prime(int n, int i);

/**
<<<<<<< HEAD
 * is_prime_number - says if an integer is a prime number
 * or not
=======
 * is_prime_number - says if an integer is a prime number or not
>>>>>>> af20c47344f3a206918a2c1df667266bfdcfb45a
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
<<<<<<< HEAD
int is_prime_numer(int n)
{
	if (n<=1)
		return (0);
	return (actual_prime(n, n - 1n);
			}
/** actual_prime - calculate if a number is prime
 * recursively
=======
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
>>>>>>> af20c47344f3a206918a2c1df667266bfdcfb45a
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
<<<<<<< HEAD

int actual_prime9int n, int i)
=======
int actual_prime(int n, int i)
>>>>>>> af20c47344f3a206918a2c1df667266bfdcfb45a
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
