#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Define dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
