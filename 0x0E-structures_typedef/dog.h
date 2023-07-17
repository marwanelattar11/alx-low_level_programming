#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - entry
 * @name: name
 * @age: age
 * @owner: char
 * Description: struct
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
