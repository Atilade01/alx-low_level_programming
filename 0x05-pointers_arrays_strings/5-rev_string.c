#include "main.h"

void rev_string(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[length] != '\0')
	       length++;	
	for (i = 0; i <= length; i++)
	       _putchar (s[length - i]);
}	

