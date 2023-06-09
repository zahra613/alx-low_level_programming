#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * my_strlen -  function that calculate lengh of name and owner
 *@str : constantant char
 * Return:len
 */
int my_strlen(const char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * new_dog -  function that creates a new dog
 *@name : name of dog
 *@age : age of dog
 *@owner : owner of dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc((my_strlen(name) + 1) * sizeof(char));
	dog->owner = malloc((my_strlen(owner) + 1) * sizeof(char));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for  (i = 0 ;  *(name + i) != '\0'; i++)
	{
		dog->name[i] = *(name + i);
	}
	dog->name[i] = '\0';
	for  (i = 0 ; *(owner + i) != '\0'; i++)
	{
		dog->owner[i] = *(owner + i);
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);

}
