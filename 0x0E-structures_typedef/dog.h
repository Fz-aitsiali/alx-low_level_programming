<<<<<<< HEAD
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to struct
 * @name: parameter of name of the dog
 * @age: parameter of age of the dog
 * @owner: pinter parameter to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
=======
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Desc: header file
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif
>>>>>>> e8ee65b947ec22c466950ce18ec2cb764919cc29
