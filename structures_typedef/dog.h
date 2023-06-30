#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initializes a variable of type struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Description: Define a new type struct dog with the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
