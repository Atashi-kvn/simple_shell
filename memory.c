#include "shell.h"

/**
 * _realloc - for reallocating the memory block
 * @ptr: is a pointer to the previous memory
 * @old_size: is the old size
 * @new_size: is the new size
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		fill_an_array(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);
}
/**
 * _memset - for filling a memory with the constant byte
 * @s: is pointer to memory area
 * @n: is first set of bytes
 * @byt: is a constant byte
 *
 * Return: A pointer to a character
 */
char *_memset(char *s, char byt, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = byt;
	}
	return (s);
}
/**
 * free_data - for freeing data
 * @data: is the data structure
 *
 * Return: (Success) a positive number (0)
 * ------- (Fail) a negative number (-1)
 */
int free_data(sh_t *data)
{
	free(data->line);
	data->line = NULL;
	free(data->args);
	data->args = NULL;
	free(data->cmd);
	data->cmd = NULL;
	free(data->error_msg);
	data->error_msg = NULL;
	return (0);
}
/**
 * _memcpy - for copying memory area
 * @dest: reps the destination memory area
 * @src: reps the source memory area
 * @n: Amount of memory in byte
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
