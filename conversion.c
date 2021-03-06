#include "holberton.h"
/**
 * int_string - checks _printf input
 * @n: integer
 * Return: charater string
 */
char *int_string(int n)
{
	int i;
	char *s;

	i = 0;

	s = malloc(intlen(n) * sizeof(char));

	if (n == 0)
	{
		s[i] = '0';
	}
	else if (n < 0)
	{
		n = _abs(n);
	}

	while (n != 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}

	s[i] = '\0';

	_rev(s);
	return (s);
}
/**
 *decimal_binary - checks _printf input
 *@n: unsigned integer
 *Return: long integer
 */

long decimal_binary(unsigned int n)
{
	int remainder;
	long binary, i;

	binary = 0;
	i = 1;

	while (n != 0)
	{
		remainder = n % 2;
		n = n / 2;
		binary = binary + (remainder * i);

		i = i * 10;
	}

	return (binary);
}
/**
 *int_b_string - checks _printf input
 *@n: unsigned integer
 *Return: pointer to character
 */
char *int_b_string(unsigned int n)
{
	int b;
	char *s;

	b = decimal_binary(n);

	s = int_string(b);

	return (s);
}
