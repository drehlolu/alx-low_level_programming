#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check if a string contains only digits
 * @str: string to be checked
 * Return: 1 if str contains only digits, 0 otherwise
 */
int check_num(char *str)
{
unsigned int count = 0;

while (count < strlen(str))
{
if (!isdigit(str[count])) /* check if the character is a digit */
return (0);
count++;
}

return (1);
}
/**
 * main - sums numbers passed as arguments to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int count, sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
sum += atoi(argv[count]); /* convert string to integer and add to sum */
}
else
{
printf("Error\n");
return (1);
}
count++;
}

printf("%d\n", sum);

return (0);
}
