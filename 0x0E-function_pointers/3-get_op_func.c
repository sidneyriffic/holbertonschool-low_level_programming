#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to appropriate calculation function
 *
 * @s: string containing operation symbol
 *
 * Return: pointer to function if successful, or NULL if fails
 */
int (*get_op_func(char*s))(int, int)
{
	char key[] = {'+', '-', '*', '/', '%'};
	int (*f[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	int i = 0;

	while (i < 5)
	{
		if (key[i] == *s)
			return (f[i]);
		i++;
	}
	return (NULL);
}
