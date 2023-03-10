#include "main.h"
#include<stdio.h>
/**
 * _puts - Prints a string to stdout.
 *
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts(char *str)
{
while (*str)
{
putchar(*str++);
}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
