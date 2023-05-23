#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog -  function that creates a new dog
 *@name : name of dog
 *@age : age of dog
 *@owner : owner of dog
 * Return:
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	dog->owner = strdup(owner);
	if (dog->name == NULL || dog->owner == NULL)
        {
                free(dog->name);
        free(dog->owner);
        free(dog);
        return (NULL);
        }
	dog->age = age;
	return (dog);
}
