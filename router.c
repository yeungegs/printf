#include "holberton.h"
/**
 *router -  checks input string for format type
 *@fmt: character
 *Return: 0 on success
 */
int (*router(char fmt))(va_list, char *, int)
{
	int i;
	routes router[] = {
		{'s', buffer_string},
		{'c', buffer_char},
		{'i', buffer_int},
		{'d', buffer_int},
		{'b', buffer_int_b},
		{'\0', NULL}
	};

	i = 0;

	while (router[i].c != '\0')
	{
		if (router[i].c == fmt)
			return (router[i].f);

		i++;
	}

	return (0);
}
