#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter
 * @str: input string to be dublicated
 * Return: pointer to the dublicated string, NULL if otherwise
 */

char *_strdup(char *str)
{
	int length, i;
char *dublicate;

	if (str == NULL)
		return (NULL);
length = 0;
while (str[length] != '\0')
	length++;

dublicate = ((char *)malloc((length + 1) * sizeof(char)));

if (dublicate == NULL)
	return (NULL);

for (i = 0; i <= length; i++)

	dublicate[i] = str[i];
return (dublicate);
}
