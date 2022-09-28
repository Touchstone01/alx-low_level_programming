#include "main.h"

/**
<<<<<<< HEAD
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int c)
=======
 * sqtRecursive - computes square root recursively
 * @n: given number
 * @m: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtRecursive(int n, int m);
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n);
>>>>>>> 9443e9298521b057fef87b1ccf6dfa018b264551
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
<<<<<<< HEAD
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
=======
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int n);
>>>>>>> 9443e9298521b057fef87b1ccf6dfa018b264551
{
	if (n == 0)
		return (0);
<<<<<<< HEAD
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
=======
	if (_sqrt_recursion(n) == -1)
		return (1);
>>>>>>> 9443e9298521b057fef87b1ccf6dfa018b264551
}
