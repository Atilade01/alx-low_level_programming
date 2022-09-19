#include "main.h"

/**
 * _strlen - function to print length of string
 * @s: function parameter
 * RETURN: return value (0)
 */ 

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

