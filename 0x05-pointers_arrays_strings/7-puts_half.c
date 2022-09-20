#include "main.h"

/**
 * puts_half - printing half of string
 * @str: string passed
 * Return - return 0
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i++])
		j++;
	for(i = (j/2); i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
