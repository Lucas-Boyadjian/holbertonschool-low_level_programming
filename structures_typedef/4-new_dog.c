
 #include <stdio.h>
 #include <stdlib.h>
 #include "dog.h"
 /**
 * *new_dog - Creates a new dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return : return (new_dog_ptr) or NULL if it's fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int name_length = 0, int owner_length = 0, int i  = 0, int j = 0;
dog_t *new_dog_ptr;
if (name == NULL || owner == NULL)
return (NULL);
while (name[name_length] != '\0')
{
name_length++;
}
while (owner[owner_length] != '\0')
{
owner_length++;
}
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);
new_dog_ptr->name = malloc((name_length + 1) * sizeof(char));
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}
new_dog_ptr->owner = malloc((owner_length + 1) * sizeof(char));
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}
for (i = 0; i < name_length; i++)
{
new_dog_ptr->name[i] = name[i];
}
new_dog_ptr->name[name_length] = '\0';
for (j = 0; j < owner_length; j++)
{
new_dog_ptr->owner[j] = owner[j];
}
new_dog_ptr->owner[owner_length] = '\0';
new_dog_ptr->age = age;
return (new_dog_ptr);
}
