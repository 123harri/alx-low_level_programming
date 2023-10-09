#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog (char *)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (char *)
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ml;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	for (nl = 0; name[nl]; nl++)

	nl = strlen(name) + 1;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
strcpy(dog->name, name);

dog->age = age;

ml = strlen(owner) + 1;

dog->owner = malloc(ml *sizeof(char));
if (dog->owner == NULL)

{
free(dog->owner);
free(dog);
return (NULL);
}
strcpy(dog->owner, owner);

return (dog);
}
