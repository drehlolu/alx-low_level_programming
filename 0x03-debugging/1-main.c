#include <stdio.h>

/**
 * main - Function that avoids an infinite loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");

/*
 * The following code causes an infinite loop. Commented out for safety.
 * i = 0;
 * while (i < 10)
 * {
 *     putchar(i);
 * }
 */

printf("Infinite loop avoided! \\o/\n");
return (0);
}
