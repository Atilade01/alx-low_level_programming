#include "main.h"
/**
 * _strcat - Appending src to dest
 * @dest: destination string
 * @src: appended string
 *
 * Return - return type of char
 */ 

char *_strcat(char *dest, char *src)
{
	int count;
	int counter;

	count = 0;
	counter = 0;

	while (dest[count] != '\0')
		count++;

	while (src[counter] != '\0')
	{
		dest[count] = src[counter];
		count++;
		counter++;
	}

	dest[count]  = '\0';

	return (dest);
}
