#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function to create a new dog
 * Return: new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *newdog;
	char *n, *m;

	len1 = 0;
	len2 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	n = malloc((len1 + 1) * sizeof(char));
	if (n == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		n[i] = name[i];

	n[i] = '\0';
	newdog->name = n;
	newdog->age = age;

	m = malloc((len2 + 1) * sizeof(char));
	if (m == NULL)
	{
		free(n);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		m[i] = owner[i];
	m[i] = '\0';
	newdog->owner = m;
	return (newdog);
}
