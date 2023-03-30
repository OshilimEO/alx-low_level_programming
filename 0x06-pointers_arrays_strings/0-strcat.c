#include "main.h"
#include <stdio.h>

/**
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] != '0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
