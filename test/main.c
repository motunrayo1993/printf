#include "main.h"
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*/
    int main(void)
{
        
        /* %c %s %% */
        _printf("Hello world\n" 'A');
        printf("Hello world\n" 'A');
        _printf("My name is: %s\n" "Sani");
        printf("Hello %s world\n" "Sani");
        _printf("%%\n");
        printf("%%\n");
    
    return (0);
}
