#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog (char *)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (char *)
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n, m, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (n = 0; name[n] != '\n'; n++)
		n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
			dog->age = age;
			for (m = 0; owner[m] != '\0'; m++)
				m++;
			dog->owner = malloc(sizeof(char) * m);
			if (dog->owner == NULL)
			{
				free(dog->owner);
				free(dog);
				return (NULL);
			}
			for (i = 0; i < m; i++)
				dog->owner[i] = owner[i];
			return (dog);
}
