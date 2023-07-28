#include "monty.h"
#include <ctype.h>

/**
 * isinteger - check if a string represents an integer
 * @str: The function the string to check
 * By Afua
 * Return: 1 if str represents an integer, otherwise 0
 */
int isinteger(const char *str)
{
	if (*str == '-' || *str == '+')
		++str;

	if (!*str)
		return (0);

	while (isdigit(*str))
		++str;

	return (!*str);
}
