#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a;

for (a = 'z'; a >= 'a'; a--)
{
	putchar(a);
}
putchar('\n');
return (0);
}

