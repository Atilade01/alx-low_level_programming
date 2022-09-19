#include "main.h"

/**
 * _strlen - function to print length of string
 * @s: function parameter
 * RETURN - returns the length
 */ 

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return count;
}

