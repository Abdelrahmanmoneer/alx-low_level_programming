#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog - the dog struct
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  *
  * Description: a little dog in a big world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
