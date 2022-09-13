#include <stdio.h>

/**
 * main - main entry of a program
 * Return: return 0 (zero)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x <= 25)
	{
		putchar(alphabet[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
