#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character b to stdout
 * @b: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 * Information: _putchar uses a local buffer of 1024 char to call write
 */
int _putchar(char b)
{
	static char buf[1024];
	static int a;

	if (b == -1 || a >= 1024)
	{
		write(1, &buf, a);
		a = 0;
	}
	if (b != -1)
	{
		buf[a] = b;
		a++;
	}
	return (1);
}

/**
 * _puts - print a string to stdout
 * @str: pointer to the string to print
 * Return: number of characters written
 */

int _puts(char *str)
{
	register int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	return (a);
}
