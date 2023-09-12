#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - function that initialize a variable of type struct
 * @name: name of dog
 * @age: Age
 * @owner: owner
 *
 * Return: Always 0.
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
