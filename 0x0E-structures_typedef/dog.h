#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
