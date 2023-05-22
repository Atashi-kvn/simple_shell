#include "shell.h"
/**
 * _getenv - gets the environment path
 * @path_name: is a pointer to the struct of data
 *
 * Return: (Success) a positive number(0)
 * ------- (Fail) a negative number(-1)
 */
char *_getenv(char *path_name)
{
	char **environ_cursor, *env_ptr, *name_ptr;

	environ_cursor = environ;
	while (*environ_cursor)
	{
		env_ptr = *environ_cursor;
		name_ptr = path_name;
		while (*env_ptr == *name_ptr)
		{
			if (*env_ptr == '=')
				break;
			env_ptr++;
			name_ptr++;
		}
		if ((*env_ptr == '=') && (*name_ptr == '\0'))
			return (env_ptr + 1);
		environ_cursor++;
	}
	return (NULL);
}
/**
 * signal_handler - for handling the process signal
 * @signo: is the signal identifier
 *
 * Return: void
 */
void signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		PRINT("\n");
		PRINT(PROMPT);
	}
}
/**
 * fill_an_array - for filling an array with elements
 * @a: is the given array
 * @el: is the given element
 * @len: is the length of the array
 *
 * Return: pointer to filled array
 */
void *fill_an_array(void *a, int el, unsigned int len)
{
	char *p = a;
	unsigned int j = 0;

	while (j < len)
	{
		*p = el;
		p++;
		j++;
	}
	return (a);
}

/**
 * array_rev - for reversing an array
 * @arr: is the given array
 * @len: is the array length
 *
 * Return: void
 */
void array_rev(char *arr, int len)
{
	int k;
	char tmp;

	for (k = 0; k < (len / 2); k++)
	{
		tmp = arr[k];
		arr[k] = arr[(len - 1) - k];
		arr[(len - 1) - k] = tmp;
	}
}
/**
 * index_cmd - for indexing command
 * @data: is a pointer to the data structure
 *
 * Return: void
 */
void index_cmd(sh_t *data)
{
	data->index += 1;
}
