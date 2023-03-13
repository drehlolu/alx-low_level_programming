#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *             into a single string, separated by a new line
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, pos = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* account for space between words */
}
len++; /* account for the final null terminator */

str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[pos] = av[i][j];
pos++;
}
str[pos] = '\n';
pos++;
}
str[pos] = '\0';

return (str);
}
