#include "dog.h"
int _strlen(char *s);
/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog2;
	char *name2, *owner2;
	int x;

	dog2 = malloc(sizeof(struct dog));
	if (dog2 == NULL)
	{
		return (0);
	}

	name2 = malloc(sizeof(_strlen(name)) + 1);
	if (name2 == NULL)
	{
		free(dog2);
		return (0);
	}
	owner2 = malloc(sizeof(_strlen(owner)) + 1);
	if (owner2 == NULL)
	{
		free(name2);
		free(dog2);
		return (0);
	}
	for (x = 0; x <= _strlen(name); x++)
	{
		name2[x] = name[x];
	}
	for (x = 0; x <= _strlen(owner); x++)
	{
		owner2[x] = owner[x];
	}
	dog2->name = name2;
	dog2->age = age;
	dog2->owner = owner2;

	return (dog2);
}
/**
 * _strlen - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
