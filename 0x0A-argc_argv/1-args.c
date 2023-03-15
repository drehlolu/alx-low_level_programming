#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
(void)argv; /* Ignore argv */
printf("%d\n", argc - 1);

return (0);
}
