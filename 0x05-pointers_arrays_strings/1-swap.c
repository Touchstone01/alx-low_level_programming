#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: = pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
