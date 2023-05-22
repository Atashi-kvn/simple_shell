#include "shell.h"

/**
 * _itoa - Is for converting integer to array
 * @n: Is for the given number
 *
 * Return: a pointer to the "null" terminated string
 */
char *_itoa(unsigned int j)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(j);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (j / 10)
	{
		s[i] = (j % 10) + '0';
		j /= 10;
		i++;
	}
	s[i] = (j % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}
/**
 * _atoi - character to integer
 * @c: is the given character
 *
 * Return: An integer
 */
int _atoi(char *c)
{
	unsigned int val = 0;
	int sign = 1;

	if (c == NULL)
		return (0);
	while (*c)
	{
		if (*c == '-')
			sign *= (-1);
		else
			val = (val * 10) + (*c - '0');
		c++;
	}
	return (sign * val);
}

/**
 * intlen - Determines the number of a digit int integer
 * @num: is the given number
 *
 * Return: the length of the integer
 */
int intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
/**
 * print_error - is for printing error
 * @data: is the data structure pointer
 *
 * Return: (Success) for a positive number
 * ------- (Fail) for a negative number
 */
int print_error(sh_t *data)
{
	char *idx = _itoa(data->index);

	PRINT("hsh: ");
	PRINT(idx);
	PRINT(": ");
	PRINT(data->args[0]);
	PRINT(": ");
	PRINT(data->error_msg);
	free(idx);
	return (0);
}

/**
 * write_history - prints history which includes errors
 * @data: is the data structure pointer
 *
 * Return: (Success) for a positive number
 * ------- (Fail) for a negative number
 */
int write_history(sh_t *data __attribute__((unused)))
{
	char *filename = "history";
	char *line_of_history = "this is a line of history";
	ssize_t fd, w;
	int len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (line_of_history)
	{
		while (line_of_history[len])
			len++;
		w = write(fd, line_of_history, len);
		if (w < 0)
			return (-1);
	}
	return (1);
}
