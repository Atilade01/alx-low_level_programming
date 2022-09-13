#include "main.h"

/**
 * print_alphabet - entry point
 * Description: program that prints alphabet in lowercase
 * Return: 0
 */

/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
