#include "main.h"
#include <stdlib.h>

/**
* convert alpha_numeric - convert digit or char
*@num - digit to number
*@upper: uppercase check
*Return: convert value
*/
int convert_alpha_numeric(int num, int uppercase)
{
  if (num >= 10)
    return (num - 10 + ((uppercase) ? 'A' : 'a'));
  else
    return (num + '0');
}

/**
 * convert_base - convert unsigned from base 10 to base 16
 * @num: decimal number
 * @base: the base to convert from
 * @upper: uppercase check
 * Return: the converted number to string
 */

char *convert_base(unsigned long num, unsigned int base_10, int uppercase)
{
	int j = 0;
	char *str;
	unsigned long nbr = num;

	while (nbr >= base_10)
	{
		nbr /= base_10;
		j++;
  }
  str = malloc(sizeof(char) * j + 2);
  if (!str)
    return (0);
  str [j + 1] = '\0';
  while (j >= 0)
  {
    nbr = num % base_10;
    str [j] = convert_alpha_numeric(nbr, uppercase);
    num /= base_10;
    j--;
  }
  return (str);
}

/**
 * convert_base_pointer - convert pointer void to ul
 * @p: pointer
 * Return: converted string
 */
char *convert_base_pointer(unsigned long ptr)
{
	unsigned long address;
	char *str;

	address = ptr;
	if (address == 0)
		return ("0");
	str = convert_base(address, 16, 0);
	return (str);
}

/**
 * convert_rot13 - encode using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *convert_rot13(char *str)
{
	int j = 0;
	char *s;
	int size = _strlen_recursion(str);

	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);

	while (str[j])
	{
		if ((str[j] >= 'a' && str[j] <= 'b') || (str[j] >= 'A' && str[j] <= 'B'))
			s[j] = str[j] + 13;
		else if ((str[j] >= 'n' && str[j] <= 'y')
				|| (str[i] >= 'N' && str[i] <= 'Y'))
			s[j] = str[j] - 13;
		else
			s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
