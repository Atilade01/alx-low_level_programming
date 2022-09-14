#include "main.h"

/**                                                                                                                                             
 * print_alphabet_x10 - Prints lowercase letters times 10                                                                                        * Description: function to print alphabets in lowercase times 10                                                                                * Return: void                                                                                                                               
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
		for (c = 'a'; c <= 'z'; c++)
	{
			_putchar(c);
	}	
	_putchar('\n');                                                                                                                         
}
