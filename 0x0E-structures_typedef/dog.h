#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Structure description
 * @name: First input
 * @age: Second input
 * @owner: Third input
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

