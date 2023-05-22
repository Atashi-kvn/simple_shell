#include "shell.h"

/**
 * _strcat - will concatenate two string in a path form
 * @first: is the first given destination
 * @second: is the second given source
 *
 * Return: (Success) to the newly string
 * ------- (Fail) if it dose not
 */
char *_strcat(char *first, char *second)
{
	int len1, len2, i = 0, j = 0;
	char *result;

	len1 = _strlen(first);
	len2 = _strlen(second);
	result = malloc((len1 + len2 + 2) * sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	while (first[j])
		result[i++] = first[j++];
	result[i++] = '/';
	j = 0;
	while (second[j])
		result[i++] = second[j++];
	result[i] = '\0';
	return (result);
}
/**
 * _strlen - for finding the length of a given string
 * @str: is the given string
 *
 * Return: (Success) the length of the string
 * ------- (Fail) negative value(-1)
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}
/**
 * _strcmp - for comparing two strings
 * @s1: is the first given string
 * @s2: is the second given string
 *
 * Return: (Success) a positive number(0)
 * ------- (Fail) a negative number(-1)
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i;

	if (s1 == NULL || s2 == NULL)
		return (1);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (cmp);
}
/**
 * _strchr - for searching or locating a character in a given string
 * @str: is the given string
 * @c: is the given string
 *
 * Return: (Success) a pointer to the first occurence of a character
 * ------- (Fail) return a null pointer
 */
char *_strchr(char *str, char c)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
	return (NULL);
}
/**
 * _strdup - forduplicating string
 * @str: is the given string
 *
 * Return: (Success) a pointer to the duplicted string
 * ------- (Fail) return a null pointer
 */
char *_strdup(char *str)
{
	char *dupl;

	if (str == NULL)
		return (NULL);
	dupl = malloc(_strlen(str) + 1);
	if (dupl == NULL)
		return (NULL);
	_strcpy(dupl, str);
	return (dupl);
}
