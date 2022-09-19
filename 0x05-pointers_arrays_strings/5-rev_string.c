#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: the string parameter
 * Return - returns 0
 */ 

void rev_string(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[length] != '\0')
	{length++;}	
	for (i = 1; i <= length; i++)
	{_putchar (s[length - i]);}
}	

