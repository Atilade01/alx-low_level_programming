#include "main.h"

/**
 * puts2 - funtcion to print every other character
 * @str: parameter string
 * Return - returns 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i = (i+2);
	}
	_putchar('\n');
}
