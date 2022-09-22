#incude "main.h"
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

	while (dest != '\0')
	{
		count++;
	}
	count = count + 1;

	if (dest[count] == '\0')
	{
		while ( counter ++)
		{
			dest[count] = src[counter];
		}
	}
	dest[counter] = '\0';
}
