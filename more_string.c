#include "shell.h"
/**
 * _strcpy - for copying a string from source to destination
 * @source: is the string source
 * @dest: is the string destination
 *
 * Return: the pointer to destinashown
 */
char *_strcpy(char *dest, char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _isalpha - for checking if the input is a letter or not
 * @c: is the character to be checked
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (SUCCESS);
	}
	return (FAIL);
}
