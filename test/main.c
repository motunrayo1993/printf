#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
 /* %c %s %% */
    _printf("Hello %c people\n", 'A');
     printf("Hello %c people\n", 'A');
    _printf("My name is: %s\n", "Sani");
     printf("Hello %s people\n", "Sani");
    _printf("%%\n");
     printf("%%\n");
    
    return (0);
}
