#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - length of string
  * @str: string
  * Return: length
*/

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
  * _strcopy - return dest with copy of src
  * @src: string to be copyed
  * @dest: string where to be paste in
  * Return: @dest
*/

char *_strcopy(char *dest, char *src)
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

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
