#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns length of string
 * @s: parameter
 * Auth: Abel Wube
 * Return: Always 0.
 */
int _strlen(char *s)
{
    char s[];
    int i = 0;
    
    while(s[i] != '\0')
    {
        i++;
    }
    
    return (i);
}
