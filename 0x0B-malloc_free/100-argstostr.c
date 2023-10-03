#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the array of arguments
 * Return: pointer to a new string containing concatenated arguments
 * NULL if ac == 0 or av == NULL or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{

	int total_length, i, j, index;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
total_length = 0;
for (i = 0; i < ac; i++)
{
	j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
				j++;
		}
	total_length++;
}
result = (char *)malloc((total_length + 1) * sizeof(char));

if (result == NULL)
	return (NULL);

index = 0;

for (i = 0; i < ac; i++)
{
	j = 0;
	while (av[i][j] != '\0')
	{
		result[index] = av[i][j];
		index++;
		j++;
	}
	result[index] = '\n';
		index++;
}
result[index] = '\n';
return (result);
}
