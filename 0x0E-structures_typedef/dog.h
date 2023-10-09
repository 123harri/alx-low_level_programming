#ifndef DOG_H
#define DOG_H
/**
 * struct dog - represents dogs' basic information
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * Description: Longer description
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
