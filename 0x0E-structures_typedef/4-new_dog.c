#include <stdlib.h>
#include "dog.h"

/**
  * _Strlen - length of string
  * @Str: string
  * Return: length
*/

int _Strlen(const char *Str)
{
	int length = 0;

	while (*Str++)
		length++;
	return (length);
}

/**
  * _Strcopy - return dest with copy of src
  * @src: string to be copyed
  * @dest: string where to be paste in
  * Return: @dest
*/

char *_Strcopy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}

/**
  * new_dog - a function that creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: pointer or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_Strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_Strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _Strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _Strcopy(dog->owner, owner);

	return (dog);
}
