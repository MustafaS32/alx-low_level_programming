#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 *
 * @name : the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Description: a dog's struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
