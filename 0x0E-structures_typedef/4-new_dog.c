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
	int x;

	dog2 = malloc(sizeof(struct dog));
	if (dog2 == NULL)
	{
		return (0);
	}

	dog2->name = malloc(sizeof(_strlen(name)) + 1);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (0);
	}
	dog2->owner = malloc(sizeof(_strlen(owner)) + 1);
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (0);
	}
	for (x = 0; x <= _strlen(name); x++)
	{
		dog2->name[x] = name[x];
	}
	dog2->name[x] = '\0';
	for (x = 0; x <= _strlen(owner); x++)
	{
		dog2->owner[x] = owner[x];
	}
	dog2->owner[x] = '\0';
	dog2->age = age;
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
