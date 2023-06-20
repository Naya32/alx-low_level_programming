#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information of a dog.
 * @name: pointer to the string for dog name.
 * @age: age of dog.
 *@owner: pointer to the string for dog owner.
 *
 *
 *description: information contained in the srtuct dog.
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog.
 */

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
