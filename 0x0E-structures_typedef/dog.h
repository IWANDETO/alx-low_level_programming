#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - dog's description
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
