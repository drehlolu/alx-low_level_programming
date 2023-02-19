#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int num = 48;

    while (num <= 57)
    {
        int num2 = num;

        while (num2 <= 57)
        {
            putchar(num);
            putchar(num2);

            if (num != 56 || num2 != 57)
            {
                putchar(44);
                putchar(32);
            }

            num2++;
        }
        num++;
    }

    putchar('\n');

    return (0);
}
