#include "main.h"
/**
 * int_strlen - A function that returens the length
 * of a string
 * @s: string
 * Return: void 
 *
*/
int_strlen(char *s)
{
	int i = 0;
	while(s[i] == "\0")
	{
		i++;
	}

	return (i);

}

