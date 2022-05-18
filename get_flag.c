#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char c, flags_t *f)
{
int a = 0;
switch (s)
{
case '+':
f->plus = 1;
a = 1;
break;
case ' ':
f->space = 1;
a = 1;
break;
case '#':
f->hash = 1;
a = 1;
break;
}
return (a);
}
